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

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n),fr,re,pfr(n),pre(n);
    fr.push_back(0);
    re.push_back(0);
    // vector<vector<ll>> dp(n,vector<ll>(n,0)),dpre(n,vector<ll>(n));
    for(int i=0;i<n;i++) cin>>a[i];
    // for(int i=0;i<n;i++){
    //    for(int j=i;j<n;j++){
    //      if(i==j){
    //        dp[i][j]=0;
    //        continue;
    //      }
    //      if(a[j]<a[j-1]&&j>0) dp[i][j]=(a[j-1]-a[j])+dp[i][j-1];
    //      else{
    //        if(j>0) dp[i][j]=dp[i][j-1];
    //      }
    //    }
    // }
    // deb(dp);
    // reverse(a.begin(),a.end());

    //  for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //       if(i==j){
    //         dpre[i][j]=0;
    //         continue;
    //       }
    //       if(a[j]<a[j-1]&&j>0) dpre[i][j]=(a[j-1]-a[j])+dpre[i][j-1];
    //       else{
    //         if(j>0) dpre[i][j]=dpre[i][j-1];
    //       }
    //     }
    //  }
    // deb(dpre);
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]) fr.push_back(a[i]-a[i+1]);
        else fr.push_back(0);
    }
    reverse(a.begin(),a.end());
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]) re.push_back(a[i]-a[i+1]);
        else re.push_back(0);
    }   

    deb(fr);
    deb(re);
    partial_sum(fr.begin(),fr.end(),fr.begin());
    partial_sum(re.begin(),re.end(),re.begin());
    deb(fr);
    deb(re);
    for(int i=0;i<m;i++){
        int s,t;
        cin>>s>>t;
        s--,t--;
        deb(s,t);
        if(s<t) cout<<fr[t]-fr[s]<<"\n";
        else{
            s=n-s-1,t=n-t-1;
            cout<<re[t]-re[s]<<"\n";
        }
    }
    
    return 0;
}