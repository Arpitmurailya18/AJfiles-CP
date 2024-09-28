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
      ll a,b,k;
      cin>>a>>b>>k;
      if(a<=k&&b<=k) cout<<2<<endl;
      else if(a<k&&b>k){
        ll c;
        if(b%k==0) c=b/k;
        else c=b/k+1;
        cout<<2*c<<endl;
      }else if(b<=k&&a>k){
        ll c;
        if(a%k==0) c=a/k;
        else c=a/k+1;
        cout<<2*c<<endl;
      }else{
         ll c,d;
         if(a%k==0) c=a/k;
         else c=a/k+1;
         if(b%k==0) d=b/k;
         else d=b/k+1;

         cout<<c+d+1<<endl;
      }
    }
    return 0;
}