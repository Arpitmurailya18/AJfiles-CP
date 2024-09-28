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
    string s1,s2;
    cin>>s1>>s2;
    map<char,char> mp;
    if(s1.size()!=s2.size()) cout<<"NO"<<endl;
    else{
        ll c=0;
        char f,g,h,j;
        for(int i=0;i<s1.size();i++){
           if(s1[i]!=s2[i]){
              c++;
              if(c==1) f=s1[i],g=s2[i];
              if(c==2) h=s1[i],j=s2[i];
              mp[s1[i]]=s2[i];
           }
           if(mp.size()>2){
            // ok=true;
            // cout<<"NO"<<endl;
            break;
           }
        }
        deb(mp);
        deb(c);
        // deb(ok);
        if(((mp.size()!=2)&&c!=2)||(mp.size()==2&&c!=2)){
            cout<<"NO"<<endl;  
        }
        else{
           if(f==j&&h==g) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
        }

    }
    return 0;
}