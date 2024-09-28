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
         ll n,one=0,two=0,three=0;
         cin>>n;
         ss s;
         cin>>s;
         AJ(i,0,n){
           if(s[i]=='R') one++;
           else if(s[i]=='U') two++;
           else if(s[i]=='L') three++;
         }
         deb(one,two,three);
         ll ans=three*3+two*2+one*1+n-1;
         ll min=ans/60,sec=ans%60;
         if(min==0) cout<<"00";
         else if(min<10) cout<<'0'<<min;
         else cout<<min;
         cout<<" MIN ";
         if(sec==0) cout<<"00";
         else if(sec<10) cout<<'0'<<sec;
         else cout<<sec;
         cout<<" SEC"<<endl;
    }
    return 0;
}