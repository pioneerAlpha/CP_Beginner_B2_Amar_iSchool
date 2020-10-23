#include<bits/stdc++.h>
#define N ((int)1e5 + 5)
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define MAX ((int)1e6 + 5)
#define endl "\n"

using namespace std;



int main()
{
    fastio;
    int n;
    cin>>n;
    vector < int > vec;
    for(int i = 1 ; i*i<=n ; i++){
        if(n % i == 0){
            vec.push_back(i);
            if(i*i != n) vec.push_back(n/i);
        }
    }
    /// O (root(n))
    return 0;
}
