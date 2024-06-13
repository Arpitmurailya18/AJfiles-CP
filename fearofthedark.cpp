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
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);
#define test int t; cin>>t; while(t--)
#define _GLIBCXX_HAVE_SQRTL 1

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
      long double px,py,ax,ay,bx,by;
      cin>>px>>py>>ax>>ay>>bx>>by;
      // pair<lld, lld> o(0,0),p(px,py),a(ax,ay),b(bx,by),midab,midop,maxpair;
      // long double op=sqrtl(pow(px,2)+pow(py,2));
      long double ab=sqrtl(pow(ax-bx,2)+pow(ay-by,2));
      // long double disab=sqrt(pow(ax-bx,2)+pow(ay-by,2));
      // debug(op);
      debug(ab);
      long double ao=sqrtl(pow(ax,2)+pow(ay,2));    
      long double ap=sqrtl(pow(ax-px,2)+pow(ay-py,2));
      long double bp=sqrtl(pow(bx-px,2)+pow(by-py,2));
      // long double maoap=max(ao,ap);
      long double bo=sqrtl(pow(bx,2)+pow(by,2));
      // long double mbobp=max(bo,bp);
      debug(ao);
      debug(ap);
      // debug(maoap);
      debug(bp);
      debug(bo);
      // debug(mbobp);
      lld ans=1e9;
      ans=min(ans,max(ap,ao));
      ans=min(ans,max(bp,bo));
      ans=min(ans,max(max(ab/2,ap),bo));
      ans=min(ans,max(max(ab/2,bp),ao));
      cout<< setprecision(10)<<fixed<<ans<<endl;
      // long double so=abs(ab/(long double)2 - min(maoap,mbobp));
      // long double abby2=(ab/(long double)2);
      // lld opby2=(op/(long double)2);
      // debug(abby2);
      // debug(so);
      // bool m=false;
      // if(((o>=a&&b>=o)&&(p>=a&&b>=p)) || ((o>=b&&a>=o)&&(p>=b&&a>=p))){
      //   m=true;
      //   lld abx=(ax+bx)/(lld)2,aby=(ay+by)/(lld)2,opx=(px)/(lld)2,opy=(py)/(lld)2;
      //   midab.first=abx;
      //   midab.second=aby;
      //   midop.first=opx;
      //   midop.second=opy;
        
      //   lld distabop=sqrtl(pow(midab.first-midop.first,2)+pow(midab.second-midop.second,2));

      //   if(distabop<abby2) cout<<abby2<<endl;
      //   else cout<<min(maoap,mbobp)<<endl;
      // }
      // else cout<<min(maoap,mbobp)<<endl;
      // debug(m);
    } 
}