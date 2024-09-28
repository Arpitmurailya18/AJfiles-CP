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

int main(){
    fastio


#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("error.txt", "w", stderr); 
        freopen("output.txt", "w", stdout);
#endif
    test{
       ll n;
       cin>>n;
       string s;
       cin>>s;
       map<ll,ll> mp;
       AJ(i,0,n) mp[s[i]]++;
       ll c=0;
       AJ(i,0,n-1){
        if(s[i]==s[i+1]) c++;
       }
       if(c==0||c==n-1) cout<<s<<endl;
       else{
        vector<pair<ll,char>> ok;
        for(auto i:mp){
            ok.push_back({i.second,i.first});
        }
        sort(ok.begin(),ok.end());
        string ans;
        for(auto i:ok){
           ans+=string(i.first,i.second);
        }
        cout<<ans<<endl;
       }
    } 
}