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
    int g=1;
    test {
      cout<<"case #"<<g<<": ";
      int n;
      cin>>n;
      vector<float> a(n),b(n);
      for(int i=0;i<n;i++) cin>>a[i]>>b[i];
      deb(a);
      deb(b);
      float maxi=0,mini=1e6;
      for(int i=0;i<n;i++){
        maxi=max(maxi,float((i+1)/b[i]));
        mini=min(mini,float((i+1)/a[i]));
      }
      deb(mini,maxi);
      if(maxi<=mini) cout<<maxi<<"\n";
      else cout<<-1<<"\n";
    }
    return 0;
}