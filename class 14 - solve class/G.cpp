#include<bits/stdc++.h>
#define ll long long
#define N ((int)(1e5 + 5))
#define MAX ((int)1e9 + 5)
#define MOD ((int)(1e9 + 7))
#define endl "\n"
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL);


using namespace std;

// fastio
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);


int arr[N];

int main()
{
    fastio;
    int n;
    cin>>n;
    for(int i = 1 ; i<=n ; i++){
        cin>>arr[i];
        arr[i] += arr[i-1];
    }
    if(arr[n] % 3 != 0){
        cout<<"0\n";
        return 0;
    }
    int x = arr[n]/3;
    ll ans = 0;
    vector < int > pos;
    for(int i = n-1 ; i>1 ; i--){
        if(arr[i] == x*2) pos.push_back(i);
    }
    for(int i = 1 ; i<n ; i++){
        while(pos.size() > 0 && pos.back() <= i) pos.pop_back();
        if(arr[i] == x) ans += pos.size();
    }
    cout<<ans<<endl;
    return 0;
}
