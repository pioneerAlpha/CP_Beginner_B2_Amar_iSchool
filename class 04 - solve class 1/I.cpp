#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define ll long long
#define endl "\n"

using namespace std;


/*fast io
ios_base::sync_with_stdio(false);
cin.tie(NULL);
*/


int main()
{
//    fastio;
    int t;
    cin>>t;
    while(t--){
        string x , y;
        cin>>x>>y;
        int k = 0 , lenx = x.length() - 1 , leny = y.length()-1;
        while(lenx >= 0 && leny >= 0){
            if(x[lenx] == '0' && y[leny] == '1'){
                k++;
                lenx--;
            }
            else if(x[lenx] == '1' && y[leny] == '1'){
                break;
            }
            else{
                lenx--;
                leny--;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}
