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

long long binpow(long long a, long long b,int MOD) {
    a = a%MOD;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = ((res%MOD) * (a%MOD))%MOD;
        a = ((a%MOD) * (a%MOD))%MOD;
        b >>= 1;
    }
    return res;
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
    //   map><int,int> mp;
      vector<int> l(n),r(n);
      int mal=-1e9,mar=-1e9;
      for(int i=0;i<n;i++){
        // int l,r;
        cin>>l[i]>>r[i];
        mal=max(mal,l[i]);
        mar=max(mar,r[i]);
        // mp[l]=r;
      }
      sort(l.rbegin(),l.rend());
      sort(r.rbegin(),r.rend());

      int ans=0;
      for(int i=0;i<n-1;i++){
        ans+=l[i]-l[i+1];
        ans+=r[i]-r[i+1];
      }

      cout<<ans+mal+mar+l[n-1]+r[n-1]<<"\n";


      

    }
    return 0;
}