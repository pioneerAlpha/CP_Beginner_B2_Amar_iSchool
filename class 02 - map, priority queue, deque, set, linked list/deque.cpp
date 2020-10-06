#include<bits/stdc++.h>
#define N ((int)1e6 + 5)

using namespace std;



/// to declare: deque < data > name;

int main()
{
    deque < int > deq;
    int q;
    cin>>q;
    while(q--){
        int typ;
        cin>>typ; /// typ = 1 : push front , typ = 2 : push back
        /// typ : 3 print front , typ 4 : print back
        if(typ == 1){
            int val;
            cin>>val;
            deq.push_front(val);
        }
        else if(typ == 2){
            int val;
            cin>>val;
            deq.push_back(val);
        }
        else if(typ == 3){
            int a = deq.front();
            cout<<a<<endl;
            deq.pop_front();
        }
        else{
            int a = deq.back();
            cout<<a<<endl;
            deq.pop_back();
        }
    }
    return 0;
}
