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

    string s;
    cin>>s;
    int n=s.size();
    if(s[0]=='0'){
        int c;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                c=i;
                break;
            }
        }
        cout<<s.substr(c,n-c)<<"\n";
    }else{
        string ans;
        int d;
        bool ok = false;
        for(int i=1;i<n;i++){
            if(s[i]=='1'&&s[i-1]=='0'){
                d=i;
                ok = true;
                break;
            }
        }
        deb(ok);

        if(ok==true){
            ans=s.substr(0,d-1)+s.substr(d,n-d+1);
            cout<<ans<<"\n";
        }
        else cout<<s.substr(0,n-1)<<"\n";

    }
    return 0;
}