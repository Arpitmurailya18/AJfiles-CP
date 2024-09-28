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

ll f(ll n,vector<ll> &a,vector<ll> &dp){
    if(n==0) return dp[n];
    if(n<0) return 0;
    if(dp[n]!=-1) return dp[n];

    ll pick=a[n]+f(n-2,a,dp);
    ll notpick=0+f(n-1,a,dp);

    return dp[n]=max(pick,notpick);
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
        vector<ll> a(n),dp(n,-1);
        for(int i=0; i<n; i++) cin>>a[i];  
        cout<<f(n-1,a,dp)<<endl;
    }
    return 0;
}