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
const int INF=1e9;
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

    test {
      ll n,k;
      cin>>n>>k;
      vector<ll> a(n+1),pref(n+1),suff(n+1);
      a[0]=0;
      for(int i=1;i<=n;i++){
        cin>>a[i];
      }

      sort(a.begin(),a.end());
      ll total = accumulate(a.begin(),a.end(),0LL);
      const auto sum = [&](auto a, auto b) { return a+b; };
      partial_sum(a.cbegin(), a.cend(), pref.begin(), sum);
      partial_sum(a.crbegin(), a.crend(), suff.rbegin(), sum);
      suff.push_back(0);
      deb(pref);
      deb(suff);
      
      ll ans=-INF;
      int f=0;
      for(int i=k;i>=0;i--){
         ans=max(ans,total-(pref[f]+suff[n-(i-1)]));
         f+=2;
      }

      cout<<ans<<"\n";

    } 
    return 0;
}