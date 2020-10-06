#include<bits/stdc++.h>
#define N ((int)1e6 + 5)

using namespace std;



/// to declare: set < data > name;
/// to insert: name.insert(value);
/// to erase: name.erase(value);
/// to use iterator : set < data > :: iterator name_of_iterator

int main()
{
    set < int > sss;
    int q;
    cin>>q;
    while(q--){
        int typ;
        cin>>typ;
        if(typ == 1){
            int val;
            cin>>val;
            sss.insert(val);
        }
        else if(typ == 0){
            int val;
            cin>>val;
            sss.erase(val);
        }
        else{
            int cnt;
            cin>>cnt;
            for(set < int > :: iterator ite = sss.begin() ; cnt>0 && ite != sss.end() ; ite++){
                cnt--;
                cout<<(*ite)<<" ";
            }
            while(cnt > 0){
                cnt--;
                cout<<"-1 ";
            }
            cout<<endl;
        }
    }
    return 0;
}
