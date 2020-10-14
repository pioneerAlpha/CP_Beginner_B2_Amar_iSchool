#include<bits/stdc++.h>
#define N ((int)1e6 + 5)
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define MAX ((int)1e6 + 5)
#define endl "\n"

using namespace std;

int arr[17];

int main()
{
    fastio;
    int n , l , r, x;
    cin>>n>>l>>r>>x;
    for(int i = 0 ; i<n ; i++) cin>>arr[i];
    int ans = 0;
    for(int mask = 0 ; mask < (1<<n) ; mask++){
        int cnt = 0 , tot = 0 , mxx = 0 , mnn = MAX;
        for(int i = 0 ; i<n ; i++){
            if((mask & (1<<i)) != 0){
                cnt++;
                tot += arr[i];
                mxx = max(mxx , arr[i]);
                mnn = min(mnn , arr[i]);
            }
        }

        if(cnt >= 2 && tot >=l && tot <= r && mxx - mnn >= x){
//            cout<<mask<<" ";
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}


