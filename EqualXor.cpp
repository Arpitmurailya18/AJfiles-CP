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

int main(){
    fastio


#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("error.txt", "w", stderr); 
        freopen("output.txt", "w", stdout);
#endif
    test{
       ll n,k;
       cin>>n>>k;
       ll f=k;
       vector<ll> a(2*n);
       map<ll,ll> mp,mo;
       AJ(i,0,2*n){
          cin>>a[i];
          if(i<n){
            mp[a[i]]++;
          }else{
            mo[a[i]]++;
          }
       }
       ll c=0LL;
       for(auto i:mp){
        if(i.second==2) c++;
       }
       ll m=2*(k-c),d=c;
       if(k==n/2&&(n&1==0)){
         AJ(i,0,2*n){
            cout<<a[i]<<" ";
            if(i==(n-1))cout<<"\n";
         }cout<<endl;
       }else{
         for(auto i:mp){
            if(i.second==2){
             if(c<=k){
                cout<<i.first<<" "<<i.first<<" ";
                c--;
             }else{
               if(k>0){
                  cout<<i.first<<" "<<i.first<<" ";
                  k--;
               }
             }
            }
            else if(i.second==1){
               if(m>0){
                  cout<<i.first<<" ";
                  m--;
               }
            }
         }cout<<endl;
         ll m=2*(f-d);
         for(auto i:mp){
            if(i.second==1){
               if(m>0){
                  cout<<i.first<<" ";
                  m--;
               }
            }
         }
         for(auto i:mo){
            if(i.second==2){
                if(d<=f){
                   cout<<i.first<<" "<<i.first<<" ";
                   d--;
                }else{
                  if(f>0){
                     cout<<i.first<<" "<<i.first<<" ";
                     f--;
                  }
                }
            }
         }cout<<endl;
       }

    } 
}