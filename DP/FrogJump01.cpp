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

int f(int n,vector<ll> &hight,vector<ll> &dp){
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    ll left = f(n-1,hight,dp)+abs(hight[n]-hight[n-1]);
    ll right =INT_MAX;
    if(n>1) right = f(n-2,hight,dp)+abs(hight[n]-hight[n-2]);
    return dp[n]=min(left,right);
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    test {
      ll n;
      cin>>n;
      vector<ll> a(n);
      AJ(i,0,n) cin>>a[i];
      vector<ll> dp(n+1,-1);
    //   cout<<f(n-1,a,dp)<<endl;
      return f(n-1,a,dp);
      deb(dp);
    }
    return 0;
}