#include<bits/stdc++.h>
#define N ((int)1e5 + 5)
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define MAX ((int)1e6 + 5)
#define endl "\n"

using namespace std;

ll gcd(ll a , ll b)
{
    if(a > b) swap(a,b);
    if(a == 0) return b;
    return gcd(b%a,a);
}

ll lcm(ll a, ll b)
{
    return a*(b/gcd(a,b));
}

int main()
{
    while(1){
        ll a , b;
        cin>>a>>b;
        cout<<gcd(a,b)<<" "<<lcm(a,b)<<endl;
    }
    return 0;
}
