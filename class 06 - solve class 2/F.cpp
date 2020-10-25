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
        string str;
        int mod;
        cin>>str>>mod;
        mod = abs(mod);
        int n = str.length() , pwr = 1 , sum = 0;
        for(int i = n - 1 ; i>=0 ; i--){
            if(str[i] == '-' || str[i] == '+') break;
            int dig = str[i] - '0';
            sum = (sum + 1LL*dig*pwr) % mod;
//            if(sum >= mod) sum -= mod;
            pwr = 10LL*pwr % mod;
        }
        cout<<"Case "<<caseno++<<": ";
        if(sum == 0) cout<<"divisible\n";
        else cout<<"not divisible\n";

    }
    return 0;
}
