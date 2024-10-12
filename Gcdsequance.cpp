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
#define fastio ios_base::sync_with_stdio(falsecls);cin.tie(0);
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


int gcd(int a, int b){ 
    int r=min(a, b); 
    while(r>0) { 
        if (a%r==0&&b%r==0) { 
            break; 
        } 
        r--; 
    }  
    return r; 
} 
int main(){
    fastio


#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("error.txt", "w", stderr); 
        freopen("output.txt", "w", stdout);
#endif
    test{
       int n,s=1,k=-1,l=-1,m=-1,t=1,u=1,v=1;
       cin>>n;
       vector<int> a(n),g,x,y,z;
       AJ(i,0,n) cin>>a[i];
       AJ(i,1,n){
        int k=gcd(a[i-1],a[i]);
        g.push_back(k);
       }
       debug(g);
    //    sort(a.begin(),a.end());
       AJ(i,1,g.size()){
        if(g[i-1]<=g[i]) s++;
        else{
            k=i;
            l=i+1;
            m=i+2;
            break;
        }
       }
       debug(k);
       debug(l);
       debug(m);
       debug(s);
       if(s==g.size()) cout<<"YES"<<endl;
       else{
        AJ(i,1,n){
          if(i!=k){int k=gcd(a[i-1],a[i]);
           x.push_back(k);
          }
        }
        AJ(i,1,x.size()){
         if(x[i-1]<=x[i]) t++;
        }
        if(t==x.size()) cout<<"YES"<<endl;
        else{
          AJ(i,1,n){
           if(i!=l){int k=gcd(a[i-1],a[i]);
            y.push_back(k);
           }
          }
          AJ(i,1,y.size()){
           if(y[i-1]<=y[i]) u++;
          }
          if(u==y.size()) cout<<"YES"<<endl;
          else{
            AJ(i,1,n){
             if(i!=m){int k=gcd(a[i-1],a[i]);
              z.push_back(k);
             }
            }
            AJ(i,1,z.size()){
             if(z[i-1]<=z[i]) v++;
            }
            if(v==s.size()) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
          }           
        }
       }
    } 
}
