#include<bits/stdc++.h>
#define N ((int)1e6 + 5)
#define MOD ((int)998244353 + 0)
#define ll long long
#define fastio ios_base::sync_with_stdio(false),cin.tie(NULL)
#define MAX ((int)1e6 + 5)
#define endl "\n"

using namespace std;

int mark[N]; /// mark[i] = 0 if i is a prime
/// mark[i] = 1 if i is a composite number

vector < int > prime;

void sieve(int n)
{
    for(int i = 3 ; i*i<=n ; i += 2){
        if(!mark[i]){
            for(int j = i*i ; j<=n ; j += (i<<1)){
                mark[j] = 1; /// 0000000...1
            }
        }
    }
    prime.push_back(2);
    for(int i = 3 ; i<=n ; i += 2){
        if(!mark[i]) prime.push_back(i);
    }
}

int main()
{
    fastio;
    sieve(N-1);
    return 0;
}
