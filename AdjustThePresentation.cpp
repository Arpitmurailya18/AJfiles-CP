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
      ll n,m,q;
      cin>>n>>m>>q;
      vector<ll> a(n),b(m);
      map<ll,ll> mp1;
      multimap<ll,ll> mp2;
    //   cin>>a[0];
      for(int i=0;i<n;i++){
         cin>>a[i];

        if(i>0) mp1[a[i-1]]=a[i];

      }
      
      for(int i=0;i<m;i++){
        cin>>b[i];
      }
      deb(a);
      deb(b);
      for(int i=0;i<m-1;i++){
        if(b[i]!=b[i+1]){
            deb(b[i],b[i+1]);
            mp2.insert(make_pair(b[i],b[i+1]));
        }
      }

      deb(mp1);
      deb(mp2);
      bool ok=true;
      for(const auto& x:mp2){
        if(x.first=mp1[x.second]||x.second==mp1[x.first]){
            ok=true;
        }else {
            ok=false;
            break;
        }
        // bool find=false;
        // for(const auto& [l,k]:mp1){
        //     if((x==l&&y==k)||(x==k&&y==l)){
        //         find=true;
        //         break;
        //     }
        // }
        // if(!find){
        //     ok=false;
        //     break;
        // }
      }

        // bool ok = true;
        // for (const auto& [x, y] : mp2) {
        //     bool found = false;
        //     for (const auto& [k, v] : mp1) {
        //         if ((x == k && y == v) || (x == v && y == k)) {
        //             found = true;
        //             break;
        //         }
        //     }
        //     if (!found) {
        //         ok = false;
        //         break;
        //     }
        // }

      if(ok) cout<<"YA"<<"\n";
      else cout<<"TADAK"<<"\n";

    }
    return 0;
}