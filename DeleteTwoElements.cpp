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

    test {
      ll n;
      cin>>n;
      vector<ll> a(n);
      ll c=0LL;
      for(int i=0;i<n;i++){
        cin>>a[i];
        c+=a[i];
        a[i]=n*a[i];
      }
      c=c*(2LL);
      ll ans=0;
      map<ll,ll> mp;

      for(int i=0;i<n;i++){
        if(mp.find(c-a[i])!=mp.end()){
           ans+=mp[c-a[i]];
        }
        mp[a[i]]++;
      }
    //   c=c*(2LL);
    //   ll ans=0;
    //   for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //        if(c==n*(a[i]+a[j])) ans++;
    //     }
    //   }

      cout<<ans<<"\n";

    }
    return 0;
}