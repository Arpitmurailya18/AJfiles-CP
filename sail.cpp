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
    ll t,x1,y1,x2,y2;
    cin>>t>>x1>>y1>>x2>>y2;
    string s;
    cin>>s;
    ll l=x2-x1,m=y2-y1,ans=0;
    bool ok=true;
    if(l==0&&m>0){
       ll n=0;
       for(int i=0;i<t;i++){
          ans++;
          if(s[i]=='N') n++;
          if(n>=m){
             cout<<ans<<endl;
             ok=false;
             break;
          }
       }if(ok) cout<<-1<<endl;
    }else if(l>0&&m>0){
       ll n=0,e=0;
       for(int i=0;i<t;i++){
          ans++;
          if(s[i]=='N') n++;
          if(s[i]=='E') e++;
          if(n>=m&&e>=l){
             cout<<ans<<endl;
             ok=false;
             break;
          }
       }if(ok) cout<<-1<<endl;
    }else if(l>0&&m==0){
       ll e=0;
       for(int i=0;i<t;i++){
          ans++;
          if(s[i]=='E') e++;
          if(e>=l){
             cout<<ans<<endl;
             ok=false;
             break;
          }
       }if(ok) cout<<-1<<endl;      
    }else if(l>0&&m<0){
       ll so=0,e=0;
       for(int i=0;i<t;i++){
          ans++;
          if(s[i]=='S') so++;
          if(s[i]=='E') e++;
          if(so>=abs(m)&&e>=l){
             cout<<ans<<endl;
             ok=false;
             break;
          }
       }if(ok) cout<<-1<<endl;
    }else if(l==0&&m<0){
       ll so=0;
       for(int i=0;i<t;i++){
          ans++;
          if(s[i]=='S') so++;
          if(so>=abs(m)){
             cout<<ans<<endl;
             ok=false;
             break;
          }
       }if(ok) cout<<-1<<endl;
    }else if(l<0&&m<0){
       ll w=0,so=0;
       for(int i=0;i<t;i++){
          ans++;
          if(s[i]=='W') w++;
          if(s[i]=='S') so++;
          if(w>=abs(l)&&so>=abs(m)){
             cout<<ans<<endl;
             ok=false;
             break;
          }
       }if(ok) cout<<-1<<endl;
    }else if(l<0&&m==0){
       ll w=0;
       for(int i=0;i<t;i++){
          ans++;
          if(s[i]=='W') w++;
          if(w>=abs(l)){
             cout<<ans<<endl;
             ok=false;
             break;
          }
       }if(ok) cout<<-1<<endl;
    }else if(l<0&&m>0){
       ll n=0,w=0;
       for(int i=0;i<t;i++){
          ans++;
          if(s[i]=='N') n++;
          if(s[i]=='W') w++;
          if(w>=abs(l)&&n>=m){
             cout<<ans<<endl;
             ok=false;
             break;
          }
       }if(ok) cout<<-1<<endl;
    }
}