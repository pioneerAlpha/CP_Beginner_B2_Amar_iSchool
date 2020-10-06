#include<bits/stdc++.h>
#define N ((int)1e6 + 5)

using namespace std;

int lef[N] , rig[N] , siz[N] , first[N] , last[N];

int main()
{
    int n;
    cin>>n; /// number of lists
    for(int i = 1 ; i<=n ; i++){
        cin>>siz[i]; /// size of the i-th list;
        int pre = -1;
        for(int j = 1 ; j<=siz[i] ; j++){
            int a;
            cin>>a;
            lef[a] = pre;
            if(pre != -1) rig[pre] = a;
            else first[i] = a;
            pre = a;
        }
        rig[pre] = -1;
        last[i] = pre;
    }
    int q;
    cin>>q;
    while(q--){
        int typ , a , b;
        cin>>typ>>a>>b;
        if(typ == 1){ /// add a new element b at the end of list a
            int tmp = last[a];
            rig[tmp] = b;
            lef[b] = tmp;
            rig[b] = -1;
            last[a] = b;
            siz[a]++;
        }
        else if(typ == 2){ /// add a new element b at the beginning of list a
            int tmp = first[a];
            lef[tmp] = b;
            rig[b] = tmp;
            lef[b] = -1;
            first[a] = b;
            siz[a]++;
        }
        else if(typ == 3){ /// add list b at the end of list a
            siz[a] = siz[a] + siz[b];
            siz[b] = 0;
            int tmpa = last[a] , tmpb = first[b];
            rig[tmpa] = tmpb;
            lef[tmpb] = tmpa;
            last[a] = last[b];
        }
        else{
            /// query
        }
    }
    return 0;
}
