//#include<cstdio>
//#include<cassert>
//#include<iostream>
//#include<cstring>
//#include<algorithm>
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define MAX ((int)1e6 + 5)
#define MAXL ((ll)1e18 + 5)
#define MAX_X ((ll)1e5 + 2)
#define pi (2.0*acos(0))
#define M ((int)1e6 + 7)
#define MOD ((int)1e9 + 7)
#define NN ((int)1e6 + 7)
#define N ((int)2e6 + 7)
#define eps (0)
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define logn 29
#define endl "\n"
#define mp make_pair
#define BUCK 105
#define LEF (idx<<1)
#define RIG ((idx<<1)|1)
//#define int ll


using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef unsigned long long ull;

/*fast io
ios_base::sync_with_stdio(false);
cin.tie(NULL);
*/




typedef tree < pair < ll, pair < ll, ll > >,  null_type,  less < pair < ll, pair < ll, ll > > >,  rb_tree_tag,  tree_order_statistics_node_update > o_set;
/// o_set s;
/// s.order_of_key(k) : Number of items strictly smaller than k .
/// *(s.find_by_order(k)) : K-th element in a set (counting from zero).

//int arr[1005] ;
//bool vis[1005] ;

int fac[N] , ifac[N];

int power(int n , int p)
{
    if( p == 0 ) return 1;

    int ans = power(n,p>>1);
    ans = 1LL*ans*ans%MOD;
    if(p&1) ans = 1LL*ans*n%MOD;
    return ans;
}


int main()
{
    //fastio;
    fac[0] = 1;
    for(int i = 1 ; i<N ; i++) fac[i] = 1LL*fac[i-1]*i%MOD;
    ifac[N-1] = power(fac[N-1],MOD-2);
    for(int i = N-2 ; i>=0 ; i--) ifac[i] = 1LL*(i+1)*ifac[i+1]%MOD;
    int t , caseno = 1;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        int ans = 1LL*fac[n+k-1]*ifac[n]%MOD;
        ans = 1LL*ans*ifac[k-1]%MOD;
        cout<<"Case "<<caseno++<<": "<<ans<<endl;
    }
    return 0;
}
