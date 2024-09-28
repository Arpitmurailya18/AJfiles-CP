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
       int n,m,k;
       cin>>n>>m>>k;
       string a,b;
       cin>>a>>b;
       sort(a.begin(),a.end());
       sort(b.begin(),b.end());
       deb(a);
       deb(b);
       int c=0,ca=0,cb=0,ok=1,om=1;
       string ans="";
       while(ca<n&&cb<m){
          if(a[ca]<b[cb]){
            if(ok<=k){
              ans+=a[ca];
              ca++;
              ok++;                
            }else{
               ans+=b[cb];
               cb++;
               ok=1;
            }
            om=1;
          }
        //   if(a[ca]>b[cb]) ok=1;
          else{
             if(om<=k){
                ans+=b[cb];
                cb++;
                om++;
             }else{
                ans+=a[ca];
                ca++;
                om=1;
             }
             ok=1;
          }
       }

       cout<<ans<<endl;
    }
    return 0;
}