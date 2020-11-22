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

//struct name{
//    data_type1 var1 , var2 , var3 , .. ;
//    data_type2 var21 , var22 , var23 , .. ;
//    data_type3 var31 , var32 , var33 , .. ;
//};

/// to declare: info name
/// to use: name.i1 , name.i2;

struct info{
    int val , idx;
};

info arr[N];

bool cmp(info a , info b)
{
    /// if( a <= b ) return true;
    /// else return false;
    if(a.val <= b.val) return true;
    return false;

    /// return a.val <= b.val;
}

int main()
{
    int n , q;
    cin>>n>>q;
    for(int i = 1 ; i<=n ; i++){
        cin>>arr[i].val;
        arr[i].idx = i;
    }

    sort(arr+1,arr+n+1,cmp);

//    for(int i = 1 ; i<=n ; i++) cout<<arr[i].val << " "<< arr[i].idx<<endl;
    while(q--){
        int val , lef = 1, rig = n , ans;
        cin>>val;
        while(lef < rig){
            if(arr[mid].val < val) lef = mid+1;
            else rig = mid;
        }
        if(arr[lef].val == val) ans = arr[lef].idx;
        else ans = -1;
        cout<<ans<<endl;
    }
}
