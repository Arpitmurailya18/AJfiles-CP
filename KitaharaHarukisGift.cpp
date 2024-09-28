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
    
    ll n;
    cin>>n;
    vector<ll> a(n),b;
    map<ll,ll> mp;
    AJ(i,0,n){
        cin>>a[i];
        mp[a[i]]++;
    }

    ll hc=mp[100],htc=mp[200];
    if(((hc&1)&&!(htc&1)&&htc!=0)||((hc&1)&&(htc&1))||(mp[100]==0&&mp[200]&1)||(mp[200]==0&&mp[100]&1)) cout<<"NO"<<"\n";
    else{
        cout<<"YES"<<"\n";
    }

    // ll sum=(mp[100]*100+mp[200]*200);
    // while(sum>0){
    //    if(sum%10!=0) b.push_back(sum%10);
    //    sum/=10;
    // }
    // ll ans=0,k=1;
    // AJ(i,0,b.size()){
    //    ans+=b[i]*k;
    //    k*=10;
    // }
    // deb(mp,sum,b,ans);
    // if(ans&1||(mp[100]==0&&mp[200]&1)||(mp[200]==0&&mp[100]&1)) cout<<"NO"<<"\n";
    // else cout<<"YES"<<"\n";

    return 0;
}