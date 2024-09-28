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

    int n;
    cin>>n;
    vector<int> a(n),presum(n),suffsum(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    deb(mp);
    sort(a.begin(),a.end());
    const auto sum = [&](auto a, auto b) { return a+b; };
    partial_sum(a.cbegin(), a.cend(), presum.begin(), sum);
    partial_sum(a.crbegin(), a.crend(), suffsum.rbegin(), sum);

    deb(presum);
    deb(suffsum);
    int ans=0;
    for(int i=n-1;i>=0;i--){
        ans++;
        if(presum[i]<suffsum[i]){
           if(presum[i]<suffsum[i+1]) ans--;
           break;
        } 
    }
    deb(ans);
    
    cout<<ans<<"\n";
    return 0;
}