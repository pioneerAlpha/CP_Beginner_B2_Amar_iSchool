/// number of objects <= 20
#include<bits/stdc++.h>
#define N ((int)1e6 + 5)
#define ll long long

using namespace std;
int val[25] , wgh[25];

int main()
{
    ll cap;
    int n;
    cin>>n>>cap;
    for(int i = 0 ; i<n ; i++){
        cin>>val[i]>>wgh[i];
    }
    int mask = (1<<n)-1;
    ll ans = 0;
    for(int sub = 0 ; sub <= mask ; sub++){

//        if( (sub | mask)  != mask ) continue;
        ll sum = 0 , pro = 0;
        for(int i = 0 ; i<n ; i++){
            if( ( sub & (1<<i) ) > 0 ){
                sum += wgh[i];
                pro += val[i];
            }
        }
        if( sum <= cap ){
            ans = max( ans , pro );
        }
    }
    cout<<ans<<endl;
    return 0;
}

/// O ( (2^n) * n) /// n<=20
