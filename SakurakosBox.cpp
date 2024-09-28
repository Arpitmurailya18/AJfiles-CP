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
      vector<ll> a(n),suffi(n);
      AJ(i,0,n) cin>>a[i];
      const auto min_of = [&](auto a, auto b) { return a+b; };
      partial_sum(a.crbegin(), a.crend(), suffi.rbegin(), min_of);
      deb(suffi);
      ll c=0;
      AJ(i,0,n-1){
         c+=(a[i]*suffi[i+1])%MOD;
      }
      deb(c);
      ll k=((n*(n-1))/2)%MOD;
      cout<<((c%MOD/(k%MOD)))%MOD<<endl;
    }
    return 0;
}