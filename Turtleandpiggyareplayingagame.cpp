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
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define test int t; cin>>t; while(t--)
constexpr int MOD=1000000007;

#ifndef AREVEL07
#include "karpit.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif

int main(){
clock_t time_req = clock();
fastio

#ifndef AREVEL07
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr); 
freopen("output.txt", "w", stdout);
#endif
    test{
       ll l,r;
       cin>>l>>r;
       ll k=log2(r);
       deb(k);
       cout<<k<<endl;
    } 

#ifndef AREVEL07
cerr << "Time : " << fixed << setprecision(6) << ((double)(clock() - time_req)) / CLOCKS_PER_SEC << endl;
#endif
}