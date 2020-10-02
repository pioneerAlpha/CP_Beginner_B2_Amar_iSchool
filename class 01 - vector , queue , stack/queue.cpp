#include<bits/stdc++.h>
#define N (100)


using namespace std;

/// to declare: queue < data type > name;
/// to insert: name.push(val);
/// to access: name.front();
/// to erase: name.pop();

int main()
{
    queue < int > lis;
//    lis.push(5);
//    lis.push(50);
//    lis.push(-5);
//    printf("%d\n",lis.front());
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
                printf("serving %d\n",lis.front());
                lis.pop();
            }
            else cout<<"-1\n";
        }
    }

    return 0;

}
