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
#define AJ(i,a,b) for(ll i=a;i<b;i++)
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
    test{
      ll n,c=0;
      cin>>n;
      vector<ll> a(n),b(n),re;
      AJ(i,0,n) cin>>a[i];
      AJ(i,0,n) cin>>b[i];
      ll m;
      cin>>m;
      vector<ll> d(m);
      AJ(i,0,m) cin>>d[i];
      AJ(i,0,n){
       if(a[i]!=b[i]) re.push_back(b[i]);
      }
      debug(b);
      bool f=false;
      ll r=d[m-1];
      AJ(i,0,n){
        if(b[i]==r){
          f=true;
          break;
        }
      }
      debug(f);
      sort(re.begin(),re.end());
      sort(d.begin(),d.end());
      debug(re);
      debug(d);
      ll x=re.size();
      // debug(x);
      if(f==false) cout<<"NO"<<endl;
      else{
        bool e=false;
        // bool e=false;
        ll h=0,u=0;
        AJ(i,h,re.size()){
          AJ(j,u,m){
            if(re[i]==d[j]){
                c++;
                h++;
                u=j+1;
                break;
                // e=true;
            }
          }
          // if(e==false){
          //   cout<<"NO"<<endl;
          //   break;
          // }
          // e=false;
        }
        debug(c);
      // }
        if(c==re.size()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
      // else cout<<"NO"<<endl;
      // else cout<<"NO"<<endl;
      }
    } 
}