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
    for(int p:prime){
        int a = p;
        while(a > 0){
            if(a % 10 == 0) break;
            a /= 10;
        }
        if(a > 0) continue;
        int d = 0;
        a = p;
        while(a > 0){
            d++;
            a /= 10;
        }
        d--;
        int mul = 1;
        for(int i = 1 ; i<=d ; i++){
            mul = mul*10;
        }
        a = p%mul;
        if(pre[a] == 1 || a == 0) pre[p] = 1;
    }
    fastio;
    int t;
    cin>>t;

    for(int i = 1 ; i<N ; i++){
        pre[i] = pre[i-1] + pre[i];
    }

    while(t--){
        int n;
        cin>>n;
        int ans = pre[n];
        cout<<ans<<endl;
    }
    return 0;
}
