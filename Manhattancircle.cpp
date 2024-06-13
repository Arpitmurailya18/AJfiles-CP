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
       ll n,m,a=-1,b=-1,c=-1,d=-1;
       cin>>n>>m;
       char v[n][m];
       AJ(i,0,n){
        AJ(j,0,m){
            cin>>v[i][j];
        }
       }
    //    AJ(i,0,n){
    //     AJ(j,0,m){
    //         cout<<v[i][j];
    //     }cout<<endl;
    //    }cout<<endl;
    //    debug(v);
       AJ(i,0,n){
        AJ(j,0,m){
            if(v[i][j]=='#'){
                a=i+1,b=j+1;
                break;
            }
        }
       }
       for(ll i=n-1;i>=0;i--){
        for(ll j=m-1;j>=0;j--){
            if(v[i][j]=='#'){
                c=i+1,d=j+1;
                break;
            }
        }
       }
       debug(a);
       debug(b);
       debug(c);
       debug(d);

       cout<<(a+c)/2<<" "<<(b+d)/2<<endl;
    } 
}