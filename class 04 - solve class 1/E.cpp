#include<bits/stdc++.h>
#define N ((int)1e6 + 5)
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define MAX ((int)1e6 + 5)
#define endl "\n"

using namespace std;

int arr[1005];

int main()
{
    fastio;
    int n , m , k;
    cin>>n>>m>>k;
    for(int i = 0 ; i<=m ; i++) cin>>arr[i];
    int ans = 0;
    for(int i = 0 ; i<m ; i++){
        int a = arr[i]^arr[m] , cnt = 0; /// the number of 1's in a is the number of mismatch
        for(int j = 0 ; j<n ; j++){
            if( ( a & (1<<j ) ) != 0) cnt++;
        }
        if(cnt <= k) ans++;
    }
    cout<<ans<<endl;
    return 0;
}


