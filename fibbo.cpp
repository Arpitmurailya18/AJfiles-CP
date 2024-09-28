#include<bits/stdc++.h>
using namespace std;
typedef long double lld;
typedef unsigned long long ull;
typedef long long ll;
typedef int in;
typedef char ch;
typedef float fl;
typedef double dou;
typedef string ss;

#define ub upper_bound
#define lb lower_bound
#define AJ(i,a,b) for(int i=a;i<b;i++)
#define test int t; cin>>t; while(t--)
constexpr int MOD=1000000007;

#ifndef ONLINE_JUDGE
#include "karpit.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif

int f(int n, vector<int> &dp){
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];
    return dp[n]=f(n-1,dp)+f(n-2,dp);
}


int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    test {
       int n;
       cin>>n;
       vector<int> dp(n+1,-1);
    //    fill(dp.begin(),dp.end(),-1);

       cout<<f(n, dp)<<endl;
       deb(dp);
    }
    return 0;
}