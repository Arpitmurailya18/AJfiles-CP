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
       ll n,m;
       cin>>n>>m;
       vector<ll> a(n);
       ll maxi=INT_MIN;
       AJ(i,0,n){
        cin>>a[i];
        if(a[i]>maxi) maxi=a[i];
       }
       AJ(i,0,m){
        char c;
        cin>>c;
        ll l,r;
        cin>>l>>r;
        if(c=='+'){
            if(maxi>=l&&maxi<=r) maxi+=1;
        }else{
            if(maxi>=l&&maxi<=r) maxi-=1;
        }
        cout<<maxi<<" ";
       }cout<<endl;

    }
    return 0;
}