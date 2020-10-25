#include<bits/stdc++.h>
#define N ((int)1e6 + 5)
#define MOD ((int)1e9 + 7)
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define MAX ((int)1e6 + 5)
#define endl "\n"

using namespace std;



int main()
{
//    fastio;
    int t , caseno = 1;
    cin>>t;
    while(t--){
        ll a , b , L;
        cin>>a>>b>>L;
        cout<<"Case "<<caseno++<<": ";
        ll x = a*(b/__gcd(a,b));
        if(L%x != 0){
            cout<<"impossible\n";
            continue;
        }
        ll ans = L/__gcd(x,L);
        while(1){
            ll g = __gcd(ans , x);
            if(g == 1) break;
            x /= g;
            ans *= g;
        }
        cout<<ans<<endl;
    }
    return 0;
}
