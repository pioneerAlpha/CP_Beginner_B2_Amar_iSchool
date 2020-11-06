#include<bits/stdc++.h>
#define MOD ((int)1e9 + 7)
#define N ((int)2e6 + 7)
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long


using namespace std;



/*fast io
ios_base::sync_with_stdio(false);
cin.tie(NULL);
*/



int main()
{
    fastio;
    int n;
    ll k;
    cin>>n>>k;
    int cur = 1;
    while(k % 2 == 0){
        k /= 2;
        cur++;
    }
    cout<<cur<<endl;
    return 0;
}
