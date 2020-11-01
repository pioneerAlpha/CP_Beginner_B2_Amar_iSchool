#include<bits/stdc++.h>
#define N ((int)1e5 + 5)
#define MOD ((int)1e9 + 7)
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define MAXP ((int)(1e6))
#define endl "\n"

using namespace std;

int mark[2 + (MAXP)] ;

vector < int > prime;

void sieve(int n)
{
    for(int i = 3 ; i*i<=n ; i += 2){
//        int idx = i>>5 , pos = i&31;
        if(mark[i] == 0){
            for(int j = i*i ; j<=n ; j += (i<<1)){
//                idx = j>>5 , pos = j&31;
                mark[j] = 1;
            }
        }
    }
    prime.push_back(2);
    for(int i = 3 ; i<=n ; i += 2){
//        int idx = i>>5 , pos = i&31;
        if(mark[i] == 0) prime.push_back(i);
    }
}



int main()
{
    sieve(MAXP);
    fastio;
    for(int i = 4 ; i<= MAXP; i += 2) mark[i] = 1;
    mark[0] = mark[1] = 1;
    int x;
    cin>>x;
    int ans = 0;
    for(int i = x - 2 ; i >= 0 ; i -= 2){
        int q = (x + i)/2 , p = (x - i)/2;
        if(mark[p]==0 && mark[q]==0){
            x = i;
            ans++;
        }
    }

    cout<<ans<<endl;

    return 0;
}
