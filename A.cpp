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
      vector<ll> a(n),v(n);
      map<ll,ll> mp;
      bool ans=false;
      for(int i=0;i<n;i++){
        cin>>a[i];
        if(i>0&&a[i]==a[i-1]){
           ans=true;
        }
        if(i==0) v[i]=a[i];
        else if(i==1) v[i]=a[i];
        else{
           v[i]=a[i]+v[i-2];
        }
      }

      deb(v);
      if(ans){
        cout<<"YES"<<"\n";
      }
      else{
        ll sum=v[0];
        mp[sum]++;
        bool ok=false;
        for(int i=1;i<n;i++){
          sum+=v[i];
          mp[sum]++;
          if(v[i]==v[i-1]){
              cout<<"YES"<<"\n";
              ok=true;
              break;
          }else {
              ll ha=mp[abs(v[i-1]-v[i])];
              deb(abs(v[i-1]-v[i]),ha);
              if(ha>0&&i%2==0){
                  cout<<"YES"<<"\n";
                  ok=true;
                  break;
              }else{
                  mp[v[i]-v[i-1]]--;
              }
          }
          deb(mp);
        }
  
        if(ok==false) cout<<"NO"<<"\n";

      }

      
    }
    return 0;
}