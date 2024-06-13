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
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define test int t; cin>>t; while(t--)

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
      ll n;
      cin>>n;
      int ans=0;
      vector<ll> a(n),b(n),c(n);
      vector<pair<int,int>> va,vb,vc;
      AJ(i,0,n){
         cin>>a[i];
         va.push_back(make_pair(a[i],i));
      }
      AJ(i,0,n){ 
        cin>>b[i];
        vb.push_back(make_pair(b[i],i));
      }
      AJ(i,0,n){
        cin>>c[i];
        vc.push_back(make_pair(c[i],i));
       }
      sort(va.begin(),va.end(),greater<> ());
      sort(vb.begin(),vb.end(),greater<> ());
      sort(vc.begin(),vc.end(),greater<> ());

      AJ(i,0,3){
        AJ(j,0,3){
          AJ(k,0,3){
            if(va[i].second!=vb[j].second&&vb[j].second!=vc[k].second&&va[i].second!=vc[k].second){
               ans=max(va[i].first+vb[j].first+vc[k].first,ans);
            }
          }
        }
      }

      cout<<ans<<endl;
    }
}