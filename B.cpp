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
      vector<ll> a(n),b(n),c(n),preok,prif,presum(n+1),preoksum(n+1);
      presum[0]=0;
      
      for(int i=0;i<n;i++){
        cin>>a[i];
        c[i]=a[i];
        if(i>0)b[i]=max(a[i],a[i-1]);
        else b[i]=a[i];
        if(a[i]%2==0){
          ll c=0;
          while(a[i]%2==0){
             c++;
             a[i]/=2;
             if(a[i]&1) break;
          }
          prif.push_back(c);
        }else prif.push_back(0);
        presum[i+1]=presum[i]+prif[i];
        preok.push_back(a[i]);
      }
      preoksum[0]=0;
      for(int i=0;i<n;i++){
       preoksum[i+1]=preoksum[i]+preok[i];
      }
      deb(prif);
      deb(presum);
      deb(preok);
      deb(preoksum);
      deb(b);
      for(int i=0;i<n;i++){
        ll ha=binpow(2,presum[i],MOD);
        deb(ha,b[i],preoksum[i]);
        if(b[i]!=b[i-1]&&i>0)cout<<((ha%MOD*b[i]%MOD)%MOD+(preoksum[i]%MOD))%MOD<<" ";
        else{
          if(i>0) cout<<((ha*b[i])%MOD+(preoksum[i-1]+c[i])%MOD)%MOD<<" ";
          else cout<<c[i]<<" ";
        }
      }cout<<"\n";

    }
    return 0;
}