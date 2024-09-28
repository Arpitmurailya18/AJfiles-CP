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

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" "; _print(x); cerr<<endl;
#else
#define debug(x);
#endif

int main(){
    fastio


#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("error.txt", "w", stderr); 
        freopen("output.txt", "w", stdout);
#endif
    ll n,c=0,d=0,e=0,f=0,ans=0;
    cin>>n;
    vector<ll> a(n),b(n),k,l;
    AJ(i,0,n){
        cin>>a[i]>>b[i];
    }
    AJ(i,0,n){
      AJ(j,0,n){
        if(i!=j){
          if(a[i]==a[j]){
            debug(a[j]);
            if(b[i]<b[j]) c++;
            if(b[i]>b[j]) d++;
          }
          if(b[i]==b[j]){
            debug(a[j]);
            if(a[i]<a[j]) e++;
            if(a[i]>a[j]) f++;
          }
        }
      }
      if(c>0&&d>0&&e>0&&f>0) ans++;
      c=d=e=f=0;
      // debug(c);
      // debug(d);
      // if(c!=0&&d!=0){
      //   k.push_back(c+d);
      // }else k.push_back(0);
      // c=0;
      // d=0;
    }
    // c=0;
    // d=0;
    // AJ(i,0,n){
    //   AJ(j,0,n){
    //     if(i!=j){
    //       if(b[i]==b[j]){
    //         debug(b[j]);
    //         if(a[i]<a[j]) c++;
    //         if(a[i]>a[j]) d++;
    //       }
    //     }
    //   }
    //   debug(c);
    //   debug(d);
    //   if(c!=0&&d!=0){
    //     l.push_back(c+d);
    //   }else l.push_back(0);
    //   c=0;
    //   d=0;
    // }
    // debug(k);
    // debug(l);
    // AJ(i,0,k.size()){
    //   if(k[i]+l[i]>=4) ans++;
    // }
    cout<<ans<<endl;
}