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
      vector<ll> prev(n),prev1;
      for(int i=0;i<n;i++) cin>>prev[i];
      ll m;
      cin>>m;
      vector<int> b(m);
      for(int i=0;i<m;i++) cin>>b[i];
      deb(b);
      ll maxi=0;
      ll k=b[0];
      for(int i=0;i<n;i++){
        ll ok=k+prev[i];
        prev1.push_back(ok);
        maxi=max(maxi,ok);
        k=ok;
      }
    //   deb(prev1);
    //   vector<ll> curr(n);
      for(int i=1;i<m;i++){
        vector<ll> curr;
        for(int j=0;j<n;j++){
           ll hi = b[i]+prev1[j];
           curr.push_back(hi);
           maxi=max(maxi,hi);
        }
        prev1=curr;
        // deb(prev1);
      }
      ll sum1=0;
      for(int i=0;i<n;i++){
         sum1+=prev[i];
         if(sum1>maxi){
            maxi=sum1;
         }
        //  if(sum1<0) sum1=0;
      }
      ll sum2=0;
      for(int i=0;i<m;i++){
         sum2+=b[i];
         if(sum2>maxi){
            maxi = sum2;
         }
        //  if(sum2<0) sum2=0;
      }
      cout<<maxi<<"\n";
    }
    return 0;
}