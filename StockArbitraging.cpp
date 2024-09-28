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

void debug(ll t) {cerr << t;}
void debug(int t) {cerr << t;}
void debug(string t) {cerr << t;}
void debug(char t) {cerr << t;}
void debug(lld t) {cerr << t;}
void debug(double t) {cerr << t;}
void debug(ull t) {cerr << t;}
void debug(bool t) {cerr << (t ? "true" : "false");}

template <class T, class V> void debug(pair<T, V> p);
template <class T> void debug(vector<T> v);
template <class T> void debug(set<T> v);
template <class T> void debug(multiset<T> v);
template <class T, class V> void debug(map<T, V> v);
template <class T, class V> void debug(multimap<T, V> v);

template <class T, class V> void debug(pair<T, V> p) {
    cerr << "{"; debug(p.first); cerr << ", "; debug(p.second); cerr << "}";
}
template <class T> void debug(vector<T> v) {
    cerr << "[";
    for (size_t i = 0; i < v.size(); ++i) {
        debug(v[i]);
        if (i != v.size() - 1) cerr << ", ";
    }
    cerr << "]";
}
template <class T> void debug(set<T> v) {
    cerr << "{";
    for (auto it = v.begin(); it != v.end(); ++it) {
        debug(*it);
        if (next(it) != v.end()) cerr << ", ";
    }
    cerr << "}";
}
template <class T> void debug(multiset<T> v) {
    cerr << "{";
    for (auto it = v.begin(); it != v.end(); ++it) {
        debug(*it);
        if (next(it) != v.end()) cerr << ", ";
    }
    cerr << "}";
}
template <class T, class V> void debug(map<T, V> v) {
    cerr << "{";
    for (auto it = v.begin(); it != v.end(); ++it) {
        debug(*it);
        if (next(it) != v.end()) cerr << ", ";
    }
    cerr << "}";
}
template <class T, class V> void debug(multimap<T, V> v) {
    cerr << "{";
    for (auto it = v.begin(); it != v.end(); ++it) {
        debug(*it);
        if (next(it) != v.end()) cerr << ", ";
    }
    cerr << "}";
}

#define debug(x) cerr << #x << " = "; debug(x); cerr << endl;

int main(){
    fastio


#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("error.txt", "w", stderr); 
        freopen("output.txt", "w", stdout);
#endif
    
       ll n,m,r;
       cin>>n>>m>>r;
       vector<ll> s(n),b(m);
       AJ(i,0,n) cin>>s[i];
       AJ(i,0,m) cin>>b[i];
       debug(s);
       debug(b);
       ll mini=INT_MAX,maxi=INT_MIN;
       AJ(i,0,n){
        if(s[i]<mini) mini=s[i];
       }
       AJ(i,0,m) if(b[i]>maxi) maxi=b[i];
       debug(mini);
       debug(maxi);
       if(maxi<mini||r<mini) cout<<r<<endl;
       else cout<<(r/mini)*maxi+r%mini<<endl;
}