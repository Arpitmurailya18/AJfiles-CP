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
       string s;
       cin>>s;
       ll c=0;
       AJ(i,0,n){
        if(s[i]=='0') c++;
       }
       deb(c);
       ll r=sqrt(n);
       if(r*r==n){
        //    cout<<"ok"<<endl;
          ll k=r-2;
          deb(k);
          ll ok=k*k;
          ll h=ok;
          ll m=n*r+r;
          deb(ok);
          for(int i=0;i<n;i++){
           if((s[i]=='0'&&i%n!=0)||(s[i]=='0'&&i%n!=n-1)) ok--;
           // deb(ok);
          }
          if(ok==0&&c==h) cout<<"YES"<<endl;
          else cout<<"NO"<<endl;
       }
       else cout<<"NO"<<endl;
    }
    return 0;
}