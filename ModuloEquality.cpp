// #include<bits/stdc++.h>
// using namespace std;
// typedef long double lld;
// typedef unsigned long long ull;
// typedef long long ll;
// typedef int in;
// typedef char ch;
// typedef float fl;
// typedef double dou;
// typedef string ss;

// #define ub upper_bound
// #define lb lower_bound
// #define AJ(i,a,b) for(int i=a;i<b;i++)
// #define fastio ios_base::sync_with_stdio(false);cin.tie(0);
// #define test int t; cin>>t; while(t--)
// constexpr int MOD=1000000007;

// void debug(ll t) {cerr << t;}
// void debug(int t) {cerr << t;}
// void debug(string t) {cerr << t;}
// void debug(char t) {cerr << t;}
// void debug(lld t) {cerr << t;}
// void debug(double t) {cerr << t;}
// void debug(ull t) {cerr << t;}
// void debug(bool t) {cerr << (t ? "true" : "false");}

// template <class T, class V> void debug(pair<T, V> p);
// template <class T> void debug(vector<T> v);
// template <class T> void debug(set<T> v);
// template <class T> void debug(multiset<T> v);
// template <class T, class V> void debug(map<T, V> v);
// template <class T, class V> void debug(multimap<T, V> v);

// template <class T, class V> void debug(pair<T, V> p) {
//     cerr << "{"; debug(p.first); cerr << ", "; debug(p.second); cerr << "}";
// }
// template <class T> void debug(vector<T> v) {
//     cerr << "[";
//     for (size_t i = 0; i < v.size(); ++i) {
//         debug(v[i]);
//         if (i != v.size() - 1) cerr << ", ";
//     }
//     cerr << "]";
// }
// template <class T> void debug(set<T> v) {
//     cerr << "{";
//     for (auto it = v.begin(); it != v.end(); ++it) {
//         debug(*it);
//         if (next(it) != v.end()) cerr << ", ";
//     }
//     cerr << "}";
// }
// template <class T> void debug(multiset<T> v) {
//     cerr << "{";
//     for (auto it = v.begin(); it != v.end(); ++it) {
//         debug(*it);
//         if (next(it) != v.end()) cerr << ", ";
//     }
//     cerr << "}";
// }
// template <class T, class V> void debug(map<T, V> v) {
//     cerr << "{";
//     for (auto it = v.begin(); it != v.end(); ++it) {
//         debug(*it);
//         if (next(it) != v.end()) cerr << ", ";
//     }
//     cerr << "}";
// }
// template <class T, class V> void debug(multimap<T, V> v) {
//     cerr << "{";
//     for (auto it = v.begin(); it != v.end(); ++it) {
//         debug(*it);
//         if (next(it) != v.end()) cerr << ", ";
//     }
//     cerr << "}";
// }

// #define debug(x) cerr << #x << " = "; debug(x); cerr << endl;


// int main(){
//     fastio


// #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("error.txt", "w", stderr); 
//         freopen("output.txt", "w", stdout);
// #endif
//     ll n,m;
//     cin>>n>>m;
//     vector<ll> a(n),b(n),k(n);
//     AJ(i,0,n) cin>>a[i];
//     AJ(i,0,n) cin>>b[i];
//     set<ll> s;
//     ll ok=a[0];
//     AJ(i,0,n){
//         if(ok<b[i]){
//             s.insert(b[i]-ok);
//         }else if(ok==b[i]){
//             s.insert(0);
//         }else{
//             s.insert(m-ok+b[i]);
//         }
//     }
//     debug(s);
//     vector<ll> ans(n);
//     sort(a.begin(),a.end());   
//     // for(auto &i:s){
//     //     vector<ll> ans(n);
//     //     AJ(j,0,n){
//     //         if(a[j]+i<m) ans[j]=a[j]+i;
//     //         else{
//     //             ans[j]=a[j]+i-m;
//     //         }
//     //     }
//     //     sort(ans.begin(),ans.end());
//     //     if(ans==b){
//     //         cout<<i<<"\n";
//     //         break;
//     //     }
//     //     // cout<<"ok"<<"\n";
//     // }
//     k=a;
//     sort(b.begin(),b.end());
//     for(auto i:s){
//         vector<ll> ans;
//         for(auto j:k){
//             debug(i);
//             // j=(j+i)%m;
//             // debug(j);
//             ans.push_back((j+i)%m);
//         }
//         debug(k);
//         debug(ans);
//         sort(ans.begin(),ans.end());
//         if(ans==b){
//             cout<<i<<endl;
//             break;
//         }
//     }
// }

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

#ifndef AREVEL07
#include "karpit.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif

int main(){
clock_t time_req = clock();
fastio

#ifndef AREVEL07
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr); 
freopen("output.txt", "w", stdout);
#endif
    ll n,m;
    cin>>n>>m;
    vector<ll> a(n),b(n),k(n);
    AJ(i,0,n) cin>>a[i];
    AJ(i,0,n) cin>>b[i];
    set<ll> s;
    ll ok=a[0];
    AJ(i,0,n){
        if(ok<b[i]){
            s.insert(b[i]-ok);
        }else if(ok==b[i]){
            s.insert(0);
        }else{
            s.insert(m-ok+b[i]);
        }
    }
    deb(s);
    vector<ll> ans(n);
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    
    for(auto &i:s){
        vector<ll> ans(n);
        AJ(j,0,n){
            if(a[j]+i<m) ans[j]=a[j]+i;
            else{
                ans[j]=a[j]+i-m;
            }
        }
        sort(ans.begin(),ans.end());
        if(ans==b){
            cout<<i<<"\n";
            break;
        }
        // cout<<"ok"<<"\n";
    }

#ifndef AREVEL07
cerr << "Time : " << fixed << setprecision(6) << ((double)(clock() - time_req)) / CLOCKS_PER_SEC << endl;
#endif
}