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
      ll n,q;
      cin>>n>>q;
      vector<ll> x(n),k(q);
      for(ll i=0;i<n;i++){
        cin>>x[i];
      }
      map<ll,ll> mp;
      for(ll i=0;i<n;i++){
        if(i>0){
            ll ok=(n-i)*i;
            mp[ok]+=x[i]-x[i-1]-1;
        }

        ll seg=(n-i)*i+(n-i-1);
        mp[seg]++;
      }
      for(ll i=0;i<q;i++){
        cin>>k[i];
        cout<<mp[k[i]]<<" ";
      }cout<<"\n";
    }
    return 0;
}