#include<bits/stdc++.h>
#define N ((int)1e6 + 5)
#define MOD ((int)998244353 + 0)
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define MAXP ((int)1e3)
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


int main()
{
    fastio;
    int n;
    cin>>n;
    sieve(n);
    vector < int > vec;
    for(int i = 0 ; i<prime.size(); i++){
        int p = prime[i];
        int tmp = p;
        while(tmp<=n){
            vec.push_back(tmp);
            tmp *= p;
        }
    }

    cout<<vec.size()<<endl;
    for(int i = 0 ; i<vec.size() ; i++) cout<<vec[i]<<" ";

    return 0;
}
