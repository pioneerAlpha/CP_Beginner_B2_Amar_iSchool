#include<bits/stdc++.h>
#define N ((int)1e5 + 5)
#define MOD ((int)1e9 + 7)
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define MAX ((int)1e6 + 5)
#define endl "\n"

using namespace std;

int power(int n , int p)
{
    if(p == 0) return 1;
    int ans = power(n,p>>1);
    ans = 1LL*ans*ans%MOD;
    if(p&1) ans = 1LL*ans*n%MOD;
    return ans;
}

int main()
{
    fastio;
    while(1){
        int n , p;
        cin>>n>>p;
        cout<<power(n%MOD,p)<<endl;
    }
    return 0;
}
