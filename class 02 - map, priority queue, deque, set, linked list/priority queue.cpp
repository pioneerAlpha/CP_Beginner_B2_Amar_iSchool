#include<bits/stdc++.h>
#define N ((int)1e6 + 5)

using namespace std;



/// to declare: priority_queue < data > name;
/// to insert: name.push(value)
/// to access the maximum element: name.top()
/// to erase the maximum element: name.pop()

int main()
{
    priority_queue < int > pqq;
    int q;
    cin>>q;
    while(q--){
        int typ , val;
        cin>>typ>>val;
        if(typ == 1){
            pqq.push(val);
        }
        else{

            while(val > 0 && pqq.empty() == 0){
                int a = pqq.top();
                pqq.pop();
                val--;
                cout<<a<<" ";
            }
            while(val--){
                cout<<"-1 ";
            }
            cout<<endl;
        }
    }
    return 0;
}
