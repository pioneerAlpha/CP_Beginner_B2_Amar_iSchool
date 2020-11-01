#include<bits/stdc++.h>
#define N ((int)1e5 + 5)
#define MOD ((int)998244353 + 0)
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define MAXP ((int)1e5)
#define endl "\n"

using namespace std;

int mark[2 + (MAXP/32)] ;

vector < int > prime;

void sieve(int n)
{
    for(int i = 3 ; i*i<=n ; i += 2){
        int idx = i>>5 , pos = i&31;
        if((mark[idx] & (1<<pos)) == 0){
            for(int j = i*i ; j<=n ; j += (i<<1)){
                idx = j>>5 , pos = j&31;
                mark[idx] |= 1<<pos;
            }
        }
    }
    prime.push_back(2);
    for(int i = 3 ; i<=n ; i += 2){
        int idx = i>>5 , pos = i&31;
        if((mark[idx] & (1<<pos)) == 0) prime.push_back(i);
    }
}

vector < int > vec[N];

bool vis[N];

int arr[N];

int main()
{
    sieve(MAXP);
    fastio;
    int n , m;
    cin>>n>>m;
//    for(int i = 1 ; i<=n ; i++){
//        int a = i;
//        for(int p:prime){
//            if(p*p > a){
//                break;
//            }
//            if(a % p == 0){
//                while( a % p == 0 ) a /= p;
//                vec[i].push_back(p);
//            }
//        }
//        if(a > 1) vec[i].push_back(a);
//    }


    for(int p:prime){
        for(int j = p ; j <= n ; j += p){
            vec[j].push_back(p);
        }
    }

    while(m--){
        string str;
        int a;
        cin>>str>>a;
        if(str[0] == '-'){
            if(vis[a] == 0) cout<<"Already off\n";
            else{
                vis[a] = 0;
                cout<<"Success\n";
                for(int p:vec[a]) arr[p] = 0;
            }
        }
        else{
            if(vis[a]==1) cout<<"Already on\n";
            else{
                bool flag = 1;
                for(int p:vec[a]){
                    if(arr[p] != 0){
                        flag = 0;
                        cout<<"Conflict with "<<arr[p]<<endl;
                        break;
                    }
                }
                if(flag){
                    vis[a] = 1;
                    cout<<"Success\n";
                    for(int p:vec[a]) arr[p] = a;
                }
            }
        }
    }


    return 0;
}
