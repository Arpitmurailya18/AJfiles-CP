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
      ll n,r;
      cin>>n>>r;
      vector<ll> a(n);
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      
      ll ans=0;
      for(int i=0;i<n;i++){
        if(a[i]&1){        
           if(a[i]>1){
            int k=a[i]/2;

            ans+=2*k;
            a[i]=1;
            r-=k;
           }
        }else{
            ans+=a[i];
            r-=a[i]/2;
            a[i]=0;
        }
      }
      deb(a);
      int oc=0;
      for(int i=0;i<n;i++){

        if(a[i]==1){
            oc++;
        }
      }

    deb(oc,r,ans);
    if(oc<=r){
        ans+=oc;
    }
    else{
      int ha=oc-r;
      ans+=r-ha;
    }
    cout<<ans<<"\n";

    }
    return 0;
}