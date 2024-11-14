/* परिवर्तिनि संसारे मृतः को वा न जायते |
   स  जातो येन जातेन याति वंश समुन्नतिम् ||  */
   
#include<bits/stdc++.h>
using namespace std;
typedef long double lld;
typedef unsigned long long ull;
typedef long long ll;

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
      vector<ll> a(n);
      for(int i=0;i<n;i++){
        cin>>a[i];
        if(i&1) a[i]=-a[i];
      }
      deb(a);
      map<ll,ll> mp;
      bool ok=true;
      ll sum=0;
      mp[sum]=1;
      for(int i=0;i<n;i++){
        sum+=a[i];
        if(mp.find(sum)!=mp.end()){
            cout<<"YES"<<"\n";
            ok=false;
            break;
        }
        mp[sum]=1;
        deb(mp);
      }

      if(ok) cout<<"NO"<<"\n";
      

    }
    return 0;
}