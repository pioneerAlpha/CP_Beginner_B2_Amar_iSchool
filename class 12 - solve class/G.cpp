#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long
#define N ((int)(1e3 + 5))
#define MAX ((int)(1e9 + 5))
#define MOD ((int)(7901 + 0))


using namespace std;


/*fast io
ios_base::sync_with_stdio(false);
cin.tie(NULL);
*/

int arr[N]  , cnt[N] , fac[N];

int main()
{
    fastio;
    fac[0] = 1;
    for(int i = 1 ; i<N; i++) fac[i] = i*fac[i-1]%MOD;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        memset(cnt,0,sizeof cnt);
        for(int i = 1 ; i<=n ; i++){
            cin>>arr[i];
            cnt[arr[i]]++;
        }
        sort(arr+1,arr+n+1);
        int ans = 1 , pre = 0;
        for(int i = 1 ; i<=n ; i++){
            if(arr[i] != pre){
                ans = ans*fac[cnt[arr[i]]]%MOD;
            }
            pre = arr[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
