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
       ll n;
       cin>>n;
       vector<ll> a(n);
       AJ(i,0,n) cin>>a[i];
       string s;  
       cin>>s;
    //    vector<vector<ll>> res;
       map<ll,ll> ok;
       unordered_map<ll,ll> pos;
       vector<bool> visit(n+1,false);
       AJ(i,0,n) pos[a[i]]=i+1;
       AJ(i,1,n+1){
        if(!visit[i]){
            vector<ll> comp;
            int curr=i;
            ll c=0;
            while(!visit[curr]){
                visit[curr]=true;
                comp.push_back(curr);
                if(s[curr-1]=='0') c++;
                curr=pos[curr];        
            }
            // map<ll,ll> ok;
            AJ(i,0,comp.size()) ok[comp[i]]=c;
            // comp.push_back(c);
            // res.push_back(comp);
        }
       }
       deb(ok);
       AJ(i,0,n){
        cout<<ok[a[i]]<<" ";
       }cout<<endl;
    }
    return 0;
}