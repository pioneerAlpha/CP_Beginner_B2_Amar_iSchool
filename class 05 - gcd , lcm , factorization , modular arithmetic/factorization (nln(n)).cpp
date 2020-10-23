#include<bits/stdc++.h>
#define N ((int)1e5 + 5)
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define MAX ((int)1e6 + 5)
#define endl "\n"

using namespace std;

vector < int > vec[N];

int main()
{
    fastio;
    int n;
    cin>>n;

    for(int i = 1 ; i<=n ; i++){
        for(int j = i ; j<=n ; j += i) vec[j].push_back(i);
    }
    /// O (n*ln(n))
    return 0;
}
