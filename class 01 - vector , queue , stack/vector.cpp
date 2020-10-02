#include<bits/stdc++.h>
#define N (100)


using namespace std;

/// to declare: vector < data type > name;
/// to insert: name.push_back(value);
/// to erase a single element: name.erase(name.begin() + index);
/// to erase a continuous segment: name.erase(name.begin() + starting index , name.begin() + starting index + how many elements to delete);

int main()
{
    int n ;
    scanf("%d",&n);
    vector < int > arr;
    for(int i = 1 ; i<=n ; i++){
        int a;
        scanf("%d",&a);
        arr.push_back(a);
    }
    n = arr.size();
    for(int i = 0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    arr.erase(arr.begin()+2);
    n = arr.size();
    printf("after erasing\n");
    for(int i = 0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    arr.erase(arr.begin()+1,arr.begin()+1+3);
    n = arr.size();
    printf("after erasing\n");
    for(int i = 0 ; i<arr.size() ; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
