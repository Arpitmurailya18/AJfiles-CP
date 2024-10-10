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
const ll INF=1e18;
#ifndef ONLINE_JUDGE
#include "karpit.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif

ll f(int i,int j,vector<ll>&a,vector<vector<ll>>&dp){
    if(i>j) return INF;

    if(i==j) return 0;

    if(dp[i][j]!=-1) return dp[i][j];

    ll ans = a[j]-a[i] + min(f(i+1,j,a,dp),f(i,j-1,a,dp));

    return dp[i][j]=ans;
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<vector<ll>> dp(n,vector<ll>(n,-1));
    sort(a.begin(),a.end());
    cout<<f(0,n-1,a,dp)<<"\n"; 

    return 0;
}