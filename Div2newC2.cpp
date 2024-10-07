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
       ll n,m,q;
       cin>>n>>m>>q;
       vector<int> a(n),b(m);
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       for(int i=0;i<m;i++){
        cin>>b[i];
        // --b[i];
       }
    //    vector<set<int>> s(n);
    //    for (int i = 0; i < m; i++) {
    //      s[b[i]].insert(i);
    //    }
    
    //    for(int i=0;i<n;i++){
    //     s[i].insert(m);
    //    }


       deb(s);
       auto is_ok=[&](){

           map<ll,ll> mp;
           vector<ll> v;

           for(int i=0;i<m;i++){
            if(mp[b[i]]==0){
                v.push_back(b[i]);
            }

            mp[b[i]]++;
           }

           for(int i=0;i<a.size()&&i<v.size();i++){
            if(a[i] != v[i]){
                return false;
            }
           }

           return true;
       };

       if(is_ok()) cout<<"YA"<<"\n";
       else cout<<"TIDAK"<<"\n";

       for(int i=0;i<q;i++){
        int s,t;
        cin>>s>>t;
        b[s-1]=t;

        if(is_ok()) cout<<"YA"<<"\n";
        else cout<<"TIDAK"<<"\n";
       }
    }
    return 0;
}