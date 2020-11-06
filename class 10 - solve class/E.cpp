#include<bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define N ((int)1e7 + 5)
#define MAX ((int)1e6 + 5)
#define MOD ((int)1e9 + 7)
#define endl "\n"
#define ll long long
using namespace std;

string init[5];

vector < string > recur(int n , int k)
{
    vector < string > ans;
    if(k == 1){
        for(int i = 0 ; i<n ; i++){
            ans.push_back(init[i]);
        }
        return ans;
    }
    vector < string > vec;
    vec = recur(n,k-1);

    int tot = (int)vec.size()*n;
    string str;
    for(int i = 0 ; i < tot ; i++) str += '.';
    for(int i = 0 ; i<tot ; i++){
        ans.push_back(str);
    }
    int len = (int)vec.size();
    for(int i = 0 ; i<len ; i++){
        for(int j = 0 ; j<len ; j++){
            if(vec[i][j] == '.'){
                int row = i*n , col = j*n;
                for(int ri = 0 ; ri<n ; ri++){
                    for(int cj = 0 ; cj<n ; cj++){
                        int a = ri + row , b = cj + col;
                        ans[a][b] = init[ri][cj];
                    }
                }
            }
            else{
                int row = i*n , col = j*n;
                for(int ri = 0 ; ri<n ; ri++){
                    for(int cj = 0 ; cj<n ; cj++){
                        int a = ri + row , b = cj + col;
                        ans[a][b] = '*';
                    }
                }
            }
        }
    }

    return ans;
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    fastio;
    int n , k;
    cin>>n>>k;
    for(int i = 0 ; i<n ; i++) cin>>init[i];
    vector < string > ans = recur(n,k);
    for(int i = 0 ; i<ans.size() ; i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}
