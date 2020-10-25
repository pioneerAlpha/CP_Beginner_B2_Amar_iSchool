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
    fastio;
    int t , caseno = 1;
    cin>>t;
    while(t--){
         double v1 , v2 , v3 , a1 , a2;
         cin>>v1>>v2>>v3>>a1>>a2;
         double t = (v1 + v2)/(a1 + a2);
         double d = ((v1 + v2)/2)*t;
         double ans = v3*t;
         cout<<setprecision(10)<<fixed;
         cout<<"Case "<<caseno++<<": "<<d<<" "<<ans<<endl;
    }
    return 0;
}
