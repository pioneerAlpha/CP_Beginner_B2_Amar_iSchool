#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long
#define N ((int)(15e4 + 5))
#define MOD ((int)(1e9 + 7))


using namespace std;


/*fast io
ios_base::sync_with_stdio(false);
cin.tie(NULL);
*/

int cnt[N];

bool vis[N];

int main()
{
    fastio;
    int n;
    cin>>n;
    for(int i = 1 ; i<=n ; i++){
        int a;
        cin>>a;
        cnt[a]++;
    }
    vis[0] = 1;
    int ans = 0;
    for(int i = 1 ; i<N ; i++){
        if(cnt[i] > 0 && !vis[i-1]){
            vis[i-1] = 1;
            cnt[i]--;
            ans++;
        }

        if(cnt[i] > 0 && !vis[i]){
            vis[i] = 1;
            cnt[i]--;
            ans++;
        }

        if(cnt[i] > 0 && !vis[i+1]){
            vis[i+1] = 1;
            cnt[i]--;
            ans++;
        }
    }

    cout<<ans<<endl;
    return 0;
}
