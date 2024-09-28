
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
       int n;
       cin>>n;
       vector<int> a(n),ok;
       
       for(int i=0;i<n;i++){
        cin>>a[i];
        ok.push_back(i+1);
       }
       int g=1,k;
       deb(ok);
       for(int i=0;i<n-1;i+=g){
        deb(i);
        if(a[i]==i+1){
            ok[i]=i+2;
            ok[i+1]=i+1;
            g=2;
        }else g=1;
        k=i;
       }
       deb(k);
       if(n==1) cout<<-1<<endl;
       else{
        if(ok[n-1]==n){
          if(a[n-1]==n){
            int c=ok[n-2];
            ok[n-1]=c;
            ok[n-2]=n;
          }
        }
        for(auto i:ok){
         cout<<i<<" ";
        }cout<<endl;
       }
    }
    return 0;
}