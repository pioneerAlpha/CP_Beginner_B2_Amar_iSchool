#include<bits/stdc++.h>
#define ll long long
#define MOD ((int)(1e9 + 7))

using namespace std;

ll ifac[55] , fac[55];



int main()
{
    int n;
    cin>>n;
    fac[0] = 1;
    for(int i = 1 ; i<=n ; i++){
        fac[i] = fac[i-1]*i%MOD;
    }

    ifac[n] = power(fac[n] , MOD - 2); /// log(n)
    for(int i = n-1 ; i>=0 ; i--){
        ifac[i] = (i+1)*ifac[i+1]%MOD;
        /// ifac[i] = (i+1) * ( 1/(i+1)! ) = 1/i!
    }
    /// complexity : O(n)
    return 0;
}
