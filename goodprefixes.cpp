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
    test{
       ll n,c=0;
       cin>>n;
       vector<ll> a(n),presum(n),masum(n);
       /*my approach*/
       AJ(i,0,n) cin>>a[i];
       const auto min_of = [&](auto a, auto b) { return a+b; };
       partial_sum(a.cbegin(), a.cend(), presum.begin(), min_of);
       const auto maxi = [&](auto a, auto b) { return max(a,b); };
       partial_sum(a.cbegin(), a.cend(), masum.begin(), maxi);
       debug(presum);
       debug(masum);
       AJ(i,1,n){
        if(presum[i]-masum[i]==masum[i]) c++;
       }
       if(a[0]==0)cout<<c+1<<endl;
       else cout<<c<<endl;
     /*  AJ(i,0,n){
        if(presum[i]-masum[i]==masum[i]) c++;
       }
       cout<<c<<endl; */

      /*---tuorist approach----*/
      //  int64_t mx = 0;
      //  int64_t sum = 0;
      //  int ans = 0;
      //  for (int i = 0; i < n; i++) {
      //    sum += a[i];
      //    mx = max(mx, a[i]);
      //    if (mx * 2 == sum) {
      //      ans += 1;
      //    }
      //  }
      //  cout << ans << '\n';
  
    } 
}