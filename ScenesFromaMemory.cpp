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
       ll k;
       cin>>k;
       string n;
       cin>>n;
       vector<int> v;
       string ok=n;
    //    while(n){
    //     ll f=n%10;
    //     deb(f);
    //     v.push_back(f);
    //     n/=10;
    //    }
       for(int i=0;i<k;i++){
          v.push_back(n[i]-'0');
       }
       deb(v);
       ll maxi=INT_MAX,g,h;
       for(int i=0;i<k;i++){
         for(int j=i;j<k;j++){
            ll ans;
            if(i==j) ans=v[i];
            else ans=v[i]*10+v[j];
            if(fastprime(ans)==0){
               maxi=min(maxi,ans);
               break;
            //    g=i,h=j;
            }
         }
       }
       
       if(maxi==INT_MAX){
        cout<<k<<"\n";
        cout<<ok<<"\n";
       }
       else{
        string haha=to_string(maxi);
        deb(haha);
        cout<<haha.size()<<"\n";
        cout<<maxi<<"\n";
       }
    }
    return 0;
}