#include<bits/stdc++.h>
#define ll long long
#define N ((int)(2e5 + 5))
#define MAX ((int)2e9 + 5)
#define MOD ((int)(1e9 + 7))
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL);


using namespace std;

// fastio
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);


int main()
{
    fastio;
    int q;
    cin>>q;
    while(q--){
        int k , n , a , b;
        cin>>k>>n>>a>>b;
        int lef = -1 , rig = n;
        while(lef < rig){
            int mid = (lef + rig + 1)/2;
            ll tot = 1LL*mid*a + 1LL*(n - mid)*b;
            if(tot < k) lef = mid;
            else rig = mid-1;
        }
        cout<<lef<<endl;
    }
    return 0;
}
