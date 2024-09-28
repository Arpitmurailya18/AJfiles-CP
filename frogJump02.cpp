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
ll fastprime(ll a){ if (a != 2 && a % 2 == 0 || a < 2) return 0;  for(int i = 3; i * i <= a; i += 2) if(a % i == 0) return 0; return 1;}
constexpr int MOD=1000000007;

#ifndef ONLINE_JUDGE
#include "karpit.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif

int f(int n,int k,vector<ll> &a,vector<ll> &dp){
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    ll mini=INT_MAX;
    for(int j=1;j<=k;j++){
        if(n-j>=0){
            ll jump=f(n-j,k,a,dp)+abs(a[n]-a[n-j]);
            mini=min(mini,jump);
        }
        dp[n]=mini;
    }
    return dp[n];
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n),dp(n+1,-1);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<f(n-1,k,a,dp)<<endl;
    deb(dp);
    return 0;
}