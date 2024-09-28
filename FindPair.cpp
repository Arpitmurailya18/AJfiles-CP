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
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    // map<ll,ll> mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        // mp[a[i]]++;
    }
    sort(a.begin(),a.end());

    vector<ll> mp(n);

    for(int i=0,j=0;i<n;i++){
        if(a[i]==a[j]){
            mp[j]++;
        }else{
            mp[i] = 1;
            j=i;
        }
    }
    
    int start=0;
    deb(mp);
    while(true){
        ll total = mp[start]*n;
        deb(total);
        if(k>total){
            k-=total;
            start++;
            while(mp[start]==0) start++;
        }else{
            deb(start);
           ll x = a[start];
           ll y;

           ll c = mp[start];

           if(k <= start*c){
               y = a[(k-1)/c];
           }else{
               k -= start*c;
               if(k <= c*c){
                 y = x;
               }else{
                 k -= c*c;

                 ll ind = start + c + (k-1)/c;
                 y = a[ind];
               }
           }

           cout<<x<<" "<<y<<"\n";

           break;
        }
    }
    return 0;
}