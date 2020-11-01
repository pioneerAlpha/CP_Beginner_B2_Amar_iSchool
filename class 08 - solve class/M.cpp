#include<bits/stdc++.h>
#define N ((int)1e6 + 5)
#define MOD ((int)998244353 + 0)
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define MAXP ((int)1e8)
#define endl "\n"

using namespace std;

int mark[2 + (MAXP/32)] , ord[MAXP+2];

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
//    prime.push_back(2);
    int tot = 1;
    ord[2] = 1;
    for(int i = 3 ; i<=n ; i += 2){
        int idx = i>>5 , pos = i&31;
        if((mark[idx] & (1<<pos)) == 0) ord[i] = ++tot;
    }
}


int main()
{
    sieve(MAXP);
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n = ord[n];
        if(n == 0) cout<<"-1\n";
        else{
            ll tmp = 8*n - 7;
            tmp = sqrt(tmp) + 10;
            while(tmp*tmp > 8*n - 7) tmp--;
            ll r = (tmp + 1)/2;
            tmp = r*(r-1)/2;
            ll c = n - tmp;
            cout<<r<<" "<<c<<endl;
        }
    }
    return 0;
}
