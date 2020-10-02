#include<bits/stdc++.h>
#define N (100)


using namespace std;

/// to declare: stack < data type > name;
/// to insert: name.push(val);
/// to access: name.top();
/// to erase: name.pop();

int main()
{
    stack < int > lis;
//    lis.push(5);
//    lis.push(50);
//    lis.push(-5);
//    printf("%d\n",lis.top());
//    lis.pop();
    int q;
    scanf("%d",&q);
    while(q--){
        int typ;
        scanf("%d",&typ);
        if(typ == 1){
            int a;
            scanf("%d",&a);
            lis.push(a);
        }
        else{
            if(lis.size() > 0){
                printf("%d\n",lis.top());
                lis.pop();
            }
            else cout<<"-1\n";
        }
    }

    return 0;

}
