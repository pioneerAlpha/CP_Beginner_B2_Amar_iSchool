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
    int n;
    cin>>n;
    for(int i = 0 ; i<n ; i++) cin>>arr[i];

    for(int mask = 0 ; mask < (1<<n) ; mask++){
        int sum = 0;
        for(int i = 0 ; i<n ; i++){
            if((mask & (1<<i)) != 0) sum += arr[i];
            else sum -= arr[i];
        }

        if(sum % 360 == 0){
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}


