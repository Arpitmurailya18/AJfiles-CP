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
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    multiset<int> ok;
    for(int i=0;i<n;i++){
        cin>>a[i];
        ok.insert(a[i]);
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    deb(a);
    deb(b);
    for(int i=0;i<m;i++){
      auto it=ok.lower_bound(b[i]+1);
      if(it!=ok.begin()){
        --it;
        cout<<*it<<"\n";
        ok.erase(it);
      }else cout<<-1<<"\n";
    }
    deb(ok);
    return 0;
}