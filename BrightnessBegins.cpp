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

long long n2(long long N)
{
    long long a=log2(N);
 
    if (pow(2, a) == N)
        return a;
 
    return a+1;
}

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
       ll ans=n2(k);
       deb(ans);
       if(k==1) cout<<2<<"\n";
       else cout<<ans+k<<"\n";
    //    if(k==1) cout<<2<<"\n";
    //    else{
    //     if(k%2==1) cout<<ll(k+log2(k+1))<<"\n";
    //     else cout<<ll(k+log2(k))<<"\n";
    //    }
    }
    return 0;
}