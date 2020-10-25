#include<bits/stdc++.h>
#define N ((int)1e6 + 5)
#define MOD ((int)1e9 + 7)
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define MAX ((int)1e6 + 5)
#define endl "\n"

using namespace std;



int main()
{
//    fastio;
    int t , caseno = 1;
    cin>>t;
    while(t--){
         ll w;
         cin>>w;
         ll m = 1 , n = 1;
         cout<<"Case "<<caseno++<<": ";
         if(w&1) cout<<"Impossible\n";
         else{
            while((w&1) == 0){
                m *= 2;
                w /= 2;
            }
            n = w;
            cout<<n<<" "<<m<<endl;
         }
    }
    return 0;
}
