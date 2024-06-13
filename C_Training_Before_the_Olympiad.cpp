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

const int N=1e5+10;
int a[N];
int pf[N];

int main(){
    fastio

#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("error.txt", "w", stderr); 
        freopen("output.txt", "w", stdout);
#endif
    test{
       ll n,m=0,f=0;
       cin>>n;
    //    cin>>a[1];
    //    m=a[1];
       AJ(i,1,n+1){
        cin>>a[i];
        // if(a[1]%2==0){
        //     m=a[1];
        // }
        // else m=a[1];
        // if(a[1]%2==1){
            
        // }
        if(i==1){
          m=a[1];
        }
        if(i==2){
          f=a[2];
        }
        // f=m;
        // if(a[1]%2==1){
        //     f=a[1];
        // }else{
        //     f=a[1];
        // }
        // f=m;
        a[i]=a[i]/2;
        a[i]=a[i]*2;
        if(a[i]==0) a[i]+=2;
        // if(i==2){
        //     pf[i]=pf[i-1]+a[i]+2;
        // }else{
        //     pf[i]=pf[i-1]+a[i];
        // }
        if(m%2==1){
           if(i==3){
             pf[i]=pf[i-1]+a[i]+2;
           }else{
            pf[i]=pf[i-1]+a[i];
           } 
        }else{
           if(i==3){
             pf[i]=pf[i-1]+a[i]+2;
           }
           else{
            pf[i]=pf[i-1]+a[i];
           }
        }
        // if(m%2==1){
        //     f=m;
        // }
        debug(m);
       }
    //    debug(f);
    //    if(f%2==1){
    //     cout<<f<<" ";
    //    }else 
       cout<<m<<" ";
       if(n!=1) cout<<((m+f)/2)*2<<" ";
       AJ(i,3,n+1){
         cout<<pf[i]<<" ";
       }cout<<endl;
    } 
}