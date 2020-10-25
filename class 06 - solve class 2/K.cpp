#include<bits/stdc++.h>
#define N ((int)1e6 + 5)
#define mod ((int)1e9 + 7)
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define MAX ((int)1e6 + 5)
#define endl "\n"

using namespace std;

int arr[N] , con[N];

int main()
{
 //   fastio;
    int t , caseno = 1;
    cin>>t;
    while(t--){
        int n , q;
        cin>>n>>q;
        ll sum = 0;
        for(int i = 1 ; i<=n ; i++){
            cin>>arr[i];
            con[i] = -(i-1) + (n-i);
            sum += 1LL*con[i]*arr[i];
        }
        /// O (n)
        cout<<"Case "<<caseno++<<":\n";
        while(q--){
            int typ;
            cin>>typ;
            if(typ == 0){
                int x , v;
                cin>>x>>v;
                x++;
                sum -= 1LL*arr[x]*con[x];
                arr[x] = v;
                sum += 1LL*arr[x]*con[x];
            }
            else{
                cout<<sum<<endl;
            }
        }

        /// O (q )
    }

    /// O ( t * (n + q) )
    return 0;
}
