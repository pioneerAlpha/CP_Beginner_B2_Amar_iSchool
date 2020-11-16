#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long
#define N ((int)(3e5 + 5))
#define MAX ((int)(1e9 + 5))
#define MOD ((int)(1e9 + 7))


using namespace std;


/*fast io
ios_base::sync_with_stdio(false);
cin.tie(NULL);
*/

int arr[2005] , brr[2005];

int main()
{
    int n , k;
    cin>>k>>n;
    for(int i = 1 ; i<=k ; i++){
        cin>>arr[i];
        arr[i] += arr[i-1];
    }
    sort(arr+1,arr+k+1);
    for(int i = 1 ; i<=n ; i++) cin>>brr[i];
    sort(brr+1,brr+n+1);
    map < int , bool > chk;
    int ans = 0;
    for(int i = 1 ; i<=k ; i++){
        int val = brr[1] - arr[i];
        map < int , bool > mmm;
        for(int j = 1 ; j<=k ; j++) mmm[arr[j] + val] = 1;
        bool flag = 1;
        for(int j = 1  ; j<=n ; j++){
            if(!mmm[brr[j]]){
                flag = 0;
                break;
            }
        }
        if(flag){
            if(!chk[val]){
                chk[val] = 1;
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
