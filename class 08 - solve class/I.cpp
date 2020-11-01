#include<bits/stdc++.h>
#define N ((int)1e5 + 5)
#define MOD ((int)1e9 + 7)
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define MAXP ((int)(1<<16))
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

int power(int n, ll p)
{
    if(p == 0) return 1;
    int ans = power(n,p>>1);
    ans = 1LL*ans*ans%MOD;
    if(p&1) ans = 1LL*ans*n%MOD;
    return ans;
}

int fun(int r , ll n)
{
    int ans = power(r,n) - 1 + MOD;
    ans = 1LL*ans*power(r-1,MOD-2)%MOD;
    return ans;
}


int main()
{
   // fastio; sad sad
    sieve(MAXP);
    int t , caseno = 1;
    cin>>t;
    while(t--){
        int n , m , ans = 1;
        cin>>n>>m;
        vector < pair < int,ll > > vec;
        for(int i = 0 ; i<prime.size() ; i++){
            int p = prime[i] ;
            ll cnt = 0;
            while(n % p == 0){
                cnt++;
                n /= p;
            }
            cnt *= m;
            if(cnt>0) vec.push_back({p,cnt});
        }
        if(n > 1) vec.push_back({n,m});
        for(auto p:vec){
            ans = 1LL*ans*fun(p.first,p.second+1)%MOD;
        }
        cout<<"Case "<<caseno++<<": "<<ans<<endl;
    }
    return 0;
}
