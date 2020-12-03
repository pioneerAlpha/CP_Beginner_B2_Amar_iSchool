#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long
#define N ((int)(2e5 + 5))
#define MAX ((int)(2e9 + 5))
#define MOD ((int)(7901 + 0))


using namespace std;


/*fast io
ios_base::sync_with_stdio(false);
cin.tie(NULL);
*/




int main()
{
    fastio;
    ll a , b , x , y;
    cin>>a>>b>>x>>y;
    ll lef = 0 , rig = MAX;
    while(lef < rig){
        ll mid = (lef + rig + 1)/2;
        if(a >= x*mid && b >= y*mid) lef = mid;
        else rig = mid-1;
    }
    cout<<x*lef<<" "<<y*lef<<endl;
    return 0;
}
