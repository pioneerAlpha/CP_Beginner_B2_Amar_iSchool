#include<bits/stdc++.h>
#define MOD ((int)998244353 + 0)
#define N ((int)2e6 + 7)
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long


using namespace std;



/*fast io
ios_base::sync_with_stdio(false);
cin.tie(NULL);
*/



int main()
{
    fastio;
    int r , c;
    cin>>r>>c;
    int ans = 1;
    for(int i = 1 ; i<=r+c ; i++) ans = ans*2 % MOD;
    cout<<ans<<endl;
    return 0;
}
