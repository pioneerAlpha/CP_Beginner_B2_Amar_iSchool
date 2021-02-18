#include<bits/stdc++.h>
#define MAX ((int)2e9 + 5)
#define MAXL ((ll)1e16 + 5)
#define pi acos(-1)
#define MOD ((int)1e9 + 7)
#define N ((int)1e5 + 5)
#define eps (1e-8)
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long
//#define int ll


using namespace std;



/*fast io
ios_base::sync_with_stdio(false);
cin.tie(NULL);
*/

/// to declare vector: vector < data type > name;
/// to insert an element: name.push_back(element);
/// to erase an element: name.erase( name.begin() + index ); /// O ( size )
/// to erase a subsegment: name.erase( name.begin() + starting index , name.begin() + ending index + 1 ); /// O ( size )

int dpp[17][(1<<15) + 2] , n , arr[16] , cost[17];

int call(int mask , int pos , int pre) /// pos can be determined by the value of mask, pos = 1 + (number of zeros in mask), pos is not independent
{                           /// so pos is not a dp state
    if(mask == 0) return 0;
    if( dpp[pre][mask] != -1 ) return dpp[pre][mask];
    int ans = MAX;
    for(int i = 0 ; i<n ; i++){
        if( mask & (1<<i) ){
            int tmp = call( mask ^ (1<<i) , pos + 1 , i );
            if(pos > 0) tmp += abs(arr[i] - arr[pre]) * cost[pos];
            ans = min(ans , tmp);
        }
    }
    return dpp[pre][mask] = ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i = 0 ; i<n ; i++) cin>>arr[i];
        for(int i = 0 ; i<n ; i++) cin>>cost[i];
        memset(dpp,-1,sizeof dpp);
        cout<<call((1<<n) - 1 , 0 , 0 )<<endl;
    }
    return 0;
}
