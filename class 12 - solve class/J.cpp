#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long
#define N ((int)(1e5 + 5))
#define MOD ((int)(1e9 + 7))


using namespace std;


/*fast io
ios_base::sync_with_stdio(false);
cin.tie(NULL);
*/

int arr[N];


int main()
{
    fastio;
    int n;
    cin>>n;
    int odd = 0, eve = 0;
    for(int i = 1 ; i<=n ; i++){
        cin>>arr[i];
        if(arr[i] & 1) odd++;
        else eve++;
    }
    if(odd > 0 && eve > 0) sort(arr + 1 , arr + 1 + n);
    for(int i = 1 ; i<=n ; i++) cout<<arr[i]<<" ";
    return 0;
}
