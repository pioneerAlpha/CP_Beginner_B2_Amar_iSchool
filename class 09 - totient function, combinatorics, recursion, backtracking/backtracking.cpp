#include<bits/stdc++.h>
#define N ((int)1e5 + 5)
#define MOD ((int)1e9 + 7)
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define MAXP ((int)(1e6))
#define endl "\n"

using namespace std;

vector < string > vec;

bool vis[30];

void backt(string str , int rem)
{
    if(rem == 0){
        vec.push_back(str);
        return;
//        cout<<str<<endl;
    }
    for(int i = 0 ; i<26 ; i++){
        if(vis[i] == 1){
            str += ('a' + i);
            vis[i] = 0;
            backt(str,rem-1);
            vis[i] = 1;
            str.pop_back();
        }
    }
}



int main()
{
    fastio;
    string word;
    cin>>word;
    for(int i = 0 ; i<word.length() ; i++){
        vis[word[i]-'a'] = 1;
    }
    backt("",word.length());
    cout<<vec.size()<<endl;
    for(auto a:vec) cout<<a<<endl;
    return 0;
}
