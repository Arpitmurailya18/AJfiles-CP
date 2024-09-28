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
    ll n;
    cin>>n;
    vector<ll> v(n);
    bool ok=false;
    map<ll,ll> mp;
    AJ(i,0,n){
        cin>>v[i];
        mp[v[i]]++;
        if(v[i]==5|| v[i]==7) ok=true;
    }
    if(mp[1]!=n/3||ok==true){
        cout<<-1<<"\n";
    }else{
        if(mp[1]!=mp[2]+mp[3]){
            cout<<-1<<"\n";
        }else{
            if(mp[6]<mp[3]){
                cout<<-1<<"\n";
            }else{
                if(mp[2]!=mp[4]+mp[6]-mp[3]){
                    cout<<-1<<"\n";
                }else{
                    for(int i=0;i<mp[4];i++){
                        cout<<1<<" "<<2<<" "<<4<<"\n";
                    }
                    for(int i=0;i<mp[6]-mp[3];i++){
                        cout<<1<<" "<<2<<" "<<6<<"\n";
                    }
                    for(int i=0;i<mp[3];i++){
                        cout<<1<<" "<<3<<" "<<6<<"\n";
                    }
                }
            }
        }
    }

}