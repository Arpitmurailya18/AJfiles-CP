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
      int n,q;
      cin>>n>>q;
      string s,t;
      cin>>s>>t;
      vector<vector<int>> preA(26,vector<int>(n,0));
      vector<vector<int>> preB(26,vector<int>(n,0));

      for(int i=0;i<n;i++){
        preA[s[i]-'a'][i]++;
        preB[t[i]-'a'][i]++;

      }
      deb(preA);
      deb(preB);
      for(int i=0;i<26;i++){
        for(int j=1;j<n;j++){
            preA[i][j]+=preA[i][j-1];
            preB[i][j]+=preB[i][j-1];
        }
      }
      deb(preA);
      deb(preB);
      for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        l--,r--;
        int cA=0,cB=0,diff=0;

        for(int i=0;i<26;i++){
            cA=preA[i][r];
            cB=preB[i][r];

            if(l>0){
                cA-=preA[i][l-1];
                cB-=preB[i][l-1];
            }
            diff+=abs(cA-cB);
        }
        deb(diff);
        int c=diff/2;
        cout<<c<<endl;
      }
    }
    return 0;
}