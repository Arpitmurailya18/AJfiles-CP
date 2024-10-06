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

// int f(int n,int x,vector<int> &a, vector<int> &dp){
//     if(x==0) return 1;
//     if(x<0) return 0;
//     if(dp[x]!=-1) return dp[x];
//     int c=0;
//     deb(a);
//     for(int i=0;i<n;i++){
//        if(x>=a[i]) c=(c + f(n,x-a[i],a,dp))%MOD;
//     }

//     return dp[x]=c;
// }

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    vector<int> dp(x+1,0);

    dp[0]=1;
    // cout<<f(n,x,a,dp)<<"\n";
    for(int i=1;i<=x;i++){
        for(int j=0;j<n;j++){
            if(i>=a[j]) dp[i]=(dp[i]+dp[i-a[j]])%MOD;
        }
    }

    deb(dp);

    cout<<dp[x]<<"\n";
    // dp[0]=1;
    // cout<<f(n,x,a,dp)<<"\n";
    deb(dp);

    return 0;
}