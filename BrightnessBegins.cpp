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
       ll s=1,e=1e9;
       bool ok=true;
       while(s<=e){
        ll mid=(s+e)/2;
        if(mid*mid-mid>k){
            e=mid-1;
        }else if(mid*mid-mid<k){
            s=mid+1;
        }else{
            ok=false;
            cout<<mid*mid-1<<"\n";
            break;
        }
       }
       deb(s);
       if(ok){  
          cout<<s*s+k-(s*s-s)-1<<"\n";
       }

    }
    return 0;
}