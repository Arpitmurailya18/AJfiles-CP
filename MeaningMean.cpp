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
      ll oc=0,c=0,op=0,ep=0;
      vector<ll> a(n);
      for(int i=0;i<n;i++){
        cin>>a[i];
        // c+=a[i];
        // if(a[i]&1){
        //     oc++;
        //     op+=a[i];
        // }else ep+=a[i];
      }
    //   op=op/2;
    //   ep=ep/2;
    //   cout<<(op+ep)/2<<"\n";
      sort(a.begin(),a.end());
      c=a[0];
      for(int i=1;i<n;i++){
        c+=a[i];
        c/=2;
        deb(c);
      }

      cout<<c<<"\n";
    //   ll k=c;
    //   c=c/(n-1);
    //   deb(oc);
    //   deb(c);
    //   ll ans=(c+a[n-1])/2;

    //   deb(ans);
    //   if(n&1) cout<<ans<<"\n";
    //   else cout<<(k+a[n-1])/n<<"\n";
    //   if(oc%2==0) cout<<c/n + 1<<"\n";
    //   else cout<<c/n<<"\n";
    }
    return 0;
}