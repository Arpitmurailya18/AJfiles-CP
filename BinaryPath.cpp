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

string f(ll i,ll j,vector<vector<char>>&a,vector<vector<string>>&dp){
       if(i==0&&j==0) return string(1,a[0][0]);
       if(i<0||j<0) return " ";

       if(dp[i][j]!="ok") return dp[i][j];

       string up = a[i][j] + f(i-1,j,a,dp);
       string left = a[i][j] + f(i,j-1,a,dp);

       return dp[i][j] = min(up,left);
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

      vector<vector<char>> a(2,vector<char>(n));
      vector<vector<string>> dp(2,vector<string>(n,"ok"));
    //   deb(a);
      for(int i=0;i<2;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
      }
    //   deb(a);
    //   deb(a[0][0]);
      cout<<f(1,n-1,a,dp)<<"\n";
      deb(dp);
    }
    return 0;
}