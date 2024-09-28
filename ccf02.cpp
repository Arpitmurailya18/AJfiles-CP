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
long long fact(int n)
{
      if(n==0)
      return 1;
    long res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
} 
long long nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}


int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    test {
       int n;
       cin>>n;
       vector<int> v(n);
       map<int,int> mp;
       for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
       }
       int maxi=INT_MIN;
       for(auto i:mp){
          if(i.second>maxi&&i.first!=0) maxi=i.second;
       }
       deb(maxi,mp);
       if(maxi!=INT_MIN){
         int k=mp[maxi];
         deb(k);
         mp[k]+=mp[0];
         deb(mp[k]);
       }
       deb(mp);
       long long c=0;
       for(auto i:mp){
          if(i.first!=0){
           if(i.second>1){int h=i.second;
               c+=nCr(h,2);
           }
          }
       }
       if(c!=0)cout<<c<<endl;
       else cout<<nCr(mp[0],2)<<endl;
    }
    return 0;
}