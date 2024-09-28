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
       ll a,b;
       cin>>a>>b;
       if(a==2*b) cout<<"YES"<<endl;
       else if(a==0&&b!=0){
        if(b&1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
       }else if(b==0&&a!=0){
        if(a&1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
       }else if((a%2==0 && b&1)||(a%2==0 && b%2==0)) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;

    }
    return 0;
}