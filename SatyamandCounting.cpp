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
      ll n,zc=0,oc=0;
      cin>>n;
      vector<ll> k(n),l(n);
      map<ll,ll> mp,ok;
      for(int i=0;i<n;i++){
         cin>>k[i]>>l[i];
         ok[k[i]]++;
         mp[k[i]]=l[i];
         if(l[i]==0) zc++;
         else oc++;
      }
      sort(k.begin(),k.end());
      ll c=0,m=0;
      for(int i=1;i<n;i++){
        if(k[i]==k[i-1]){
            c++;
        }
      }
      deb(c,zc,oc);
      set<ll> s;
      for(int i=0;i<n;i++){
        s.insert(k[i]);
      }
      vector<ll> d,e;
      for(auto i:s){
        d.push_back(i);
      }
      deb(d);
      for(auto i:mp){
        if(i.second==1) e.push_back(i.first);
      }
      deb(e);
      for(int i=0;i<d.size()-2;i++){
        if(d[i+1]-d[i]==1&&d[i+2]-d[i+1]==1){
            
            if(((mp[d[i+1]]==0||ok[d[i+1]]==2)&&(mp[d[i]]==1||ok[d[i]]==2)&&(mp[d[i+2]]==1||ok[d[i+2]]==2))){
                m++;
            }
        }
      }
   
      deb(mp);
      for(int i=0;i<d.size()-2;i++){
        if(d[i+1]-d[i]==1&&d[i+2]-d[i+1]==1){
            // deb(mp[d[i]],mp[d[i+1]],mp[d[i+2]]);
            if(((mp[d[i+1]]==1||ok[d[i+1]]==2)&&(mp[d[i]]==0||ok[d[i]]==2)&&((mp[d[i+2]]==0||ok[d[i+2]]==2)))){
                m++;
            }
        }
      }
      deb(m);
    
      cout<<c*(zc-1)+c*(oc-1)+m<<endl;
    }
    return 0;
}