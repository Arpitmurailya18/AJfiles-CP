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
vector<ll> dp(1e9);

ll c=0;

for(ll i=0LL;i<1e9;i++){
    dp[i]+=(i+1)*(i+1) + (i+1)*(i+2);
}

ll f(ll i,ll j,vector<vector<ll>>&dp){

    if(i==0&&j==0) return 1;
    if(i<0||j<0) return 0;

    if(dp[i][j]!=-1) return dp[i][j];

    ll up=(i+1)*(j+1)+f(i-1,j,dp);
    ll left=(i+1)*(j+1)+f(i,j-1,dp);

    return dp[i][j] = max(up,left);

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

        cout<<dp[n]<<"\n";
        // vector<vector<ll>> dp(n,vector<ll>(n,-1));
        // // cout<<f(n-1,n-1,dp)<<"\n";

        // ll ans=f(n-1,n-1,dp);

        // cout<<ans<<"\n";

        // vector<ll> prev(n,0),curr(n,0);
        // prev[0]=1;

        // for(ll i=0;i<n;i++){
            
        // }


    }
    return 0;
}