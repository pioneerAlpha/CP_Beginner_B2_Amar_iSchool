#include<bits/stdc++.h>
#define N ((int)1e6 + 5)
#define MOD ((int)998244353 + 0)
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define MAXP ((int)1e6)
#define endl "\n"

using namespace std;

int mark[2 + (MAXP/32)];

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

int pre[N]; /// pre[i] = 1 if i is a special prime

int main()
{
    sieve(MAXP);
    fastio;
    int n;
    cin>>n;
    vector < int > vec;
    int ans = 1;
    for(int p:prime){
        if(n % p == 0){
            int cnt = 0;
            while(n%p == 0){
                cnt++;
                n /= p;
            }
            ans *= p;
            vec.push_back(cnt);
        }
    }
    int opp = 0;
    int mxx = 0;
    for(int a:vec){
        while(1){
            if((a&(a-1)) == 0) break;
            a++;
        }
        mxx = max(mxx,a);
    }
    for(int a:vec){
        if(a < mxx){
            opp++;
            break;
        }
    }
    while(mxx > 1){
        mxx /= 2;
        opp++;
    }
    cout<<ans<<" "<<opp<<endl;
    return 0;
}
