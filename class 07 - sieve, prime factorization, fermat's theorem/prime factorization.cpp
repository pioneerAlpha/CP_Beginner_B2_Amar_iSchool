#include<bits/stdc++.h>
#define N ((int)1e6 + 5)
#define MOD ((int)998244353 + 0)
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define MAX ((int)1e6 + 5)
#define endl "\n"

using namespace std;

int mark[2 + (N/32)];

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

int main()
{
    fastio;
    ll n;
    cin>>n; /// n = 1e10;
    vector < pair < ll , int > > vec;
    sieve(1e5);
//    for(int i = 0 ; i<prime.size() ; i++){
//        int p = prime[i];
//    }
    for(int p:prime){
        if(1LL*p*p > n) break;
        if(n%p == 0){
            int cnt = 0;
            while(n%p == 0){
                n /= p;
                cnt++;
            }
            vec.push_back({p,cnt});
        }
    }
    if(n > 1){
        vec.push_back({n,1});
    }

    return 0;
}
