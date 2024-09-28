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
    test{
         ll n,one=0,two=0,three=0;
         cin>>n;
         ss s;
         cin>>s;
         AJ(i,0,n){
           if(s[i]=='>') one++;
           else if(s[i]=='^') two++;
           else three++;
         }
         ll ans=three*3+two*2+one*1+n-1;
         ll min=ans/60,sec=ans%60;
         if(min==0) cout<<"00";
         else if(min<10&&min!=0) cout<<'0'<<min;
         else cout<<min;
         cout<<" MIN ";
         if(sec==0) cout<<"00";
         else if(sec<10&&sec!=0) cout<<'0'<<sec;
         else cout<<sec;
         cout<<" SEC"<<endl;      
    } 
}