#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define endl "\n"
#define ll long long
#define N ((int)2e5 + 5)
#define MAX ((int)2e9 + 5)
#define MOD ((int)7901 + 0)


using namespace std;


/*fast io
ios_base::sync_with_stdio(false);
cin.tie(NULL);
*/
int arr[N] , brr[N];

bool chk(int opp , int n)
{
    int cnt , zer = 0;
    priority_queue < int > pqq;
    for(int i = 1 ; i<=n ; i++){
        if(arr[i] == 0) zer++;
        else pqq.push(-arr[i]);
    }
    cnt = max(0,opp - n);
    opp = min(opp , n);

    deque < int > deq;
    for(int i = 1 ; i<=n ; i++) deq.push_back(brr[i]); /// building the pile

    /// pushing 0s
    while(cnt-- && zer--){
        deq.push_back(0);
        int a = deq.front();
        deq.pop_front();
        if(a == 0) zer++;
        else pqq.push(-a);
    }

    /// pushing numbered cards
    while(opp-- && !pqq.empty()){
        int a = -pqq.top();
        pqq.pop();
        deq.push_back(a);
        a = deq.front();
        deq.pop_front();
        if(a != 0) pqq.push(-a);
    }
    for(int i = 1 ; i<=n ; i++){
        if(deq.front() != i) return 0;
        deq.pop_front();
    }
    return 1;
}

int main()
{
    fastio;
    int n;
    cin>>n;
    for(int i = 1 ; i<=n ; i++) cin>>arr[i];
    for(int i = 1 ; i<=n ; i++) cin>>brr[i];

    int lef = 0 , rig = n+n;
    while(lef < rig){
        int mid = (lef + rig)/2;
        if(chk(mid,n)) rig = mid;
        else lef = mid+1;
    }
    cout<<lef<<endl;

    return 0;
}
