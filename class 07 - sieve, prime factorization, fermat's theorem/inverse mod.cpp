#include<bits/stdc++.h>
#define N ((int)1e6 + 5)
#define MOD ((int)1e9 + 7)
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define MAX ((int)1e6 + 5)
#define endl "\n"

using namespace std;

int power(int n , int p , int mod)
{
    if(p == 0) return 1;
    int ans = power(n,p>>1,mod);
    ans = 1LL*ans*ans%mod;
    if(p&1) ans = 1LL*ans*n%mod;
    return ans;
}

int main()
{
    fastio;
    int n , p; /// p = 1e9 + 7
    cin>>n>>p; /// (1/n)%p = (n^(p-2))%p
    cout<<power(n,p-2,p)<<endl;
    return 0;
}
