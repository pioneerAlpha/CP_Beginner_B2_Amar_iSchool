#include<bits/stdc++.h>
#define N ((int)1e6 + 5)

using namespace std;



/// to declare: map < data1 , data2 > name;

int main()
{
    map < int , bool > arr;
    int q;
    cin>>q;
    while(q--){
        int val;
        cin>>val;
        if(arr[val] == 1) cout<<"old\n";
        else{
            cout<<"new\n";
            arr[val] = 1;
        }
    }
    return 0;
}
