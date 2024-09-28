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
// template <class T, class V> void debug(map<T, V> v) {
//     cerr << "{";
//     for (auto it = v.begin(); it != v.end(); ++it) {
//         debug(*it);
//         if (next(it) != v.end()) cerr << ", ";
//     }
//     cerr << "}";
// }
template <class T, class V> void debug(multimap<T, V> v) {
    cerr << "{";
    for (auto it = v.begin(); it != v.end(); ++it) {
        debug(*it);
        if (next(it) != v.end()) cerr << ", ";
    }
    cerr << "}";
}

#define debug(x) cerr << #x << " = "; debug(x); cerr << endl;

const int N = 1e5 + 10;
vector<int> p[N];
// void solve() {
//     int n;
//     cin >> n;
//     set<int>st;
//     for(int i=1,x; i<=n; ++i) {
//         cin >> x;
//         st.insert(x);
//         pos[x].push_back(i);
//     }
//     vector<pair<int,int>>ans;
//     for(auto ele : st) {
//         int d = 0, ok = 1;
//         for(int i=1; i<pos[ele].size(); ++i) {
//             if(d == 0) {
//                 d = pos[ele][i] - pos[ele][i-1];
//             }
//             else if (pos[ele][i] - pos[ele][i-1] != d) {
//                 ok = 0;
//                 break;
//             }
//         }
//         if(ok) {
//             ans.push_back({ele, d});
//         }
//     }
//     cout << ans.size() << '\n';
//     for(auto i : ans) {
//         cout << i.first << ' ' << i.second << '\n';
//     }
// } 


int main(){
    fastio

#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("error.txt", "w", stderr); 
        freopen("output.txt", "w", stdout);
#endif
    
    // solve();
    int n;
    cin>>n;
    set<int> s;
    for(int i=1,x;i<=n;++i){
        cin>>x;
        s.insert(x);
        p[x].push_back(i);
    }
    debug(s);
    debug(p);
    vector<pair<int,int>> ans;
    for(auto i:s){
        int d=0;
        bool ok=true;
        for(int j=1;j<p[i].size();++j){
            if(d==0){
                d=p[i][j]-p[i][j-1];
            }else if(p[i][j]-p[i][j-1]!=d){
                ok=false;
                break;
            }
        }
        if(ok) ans.push_back({i,d});
    }
    debug(ans);
    cout<<ans.size()<<"\n";
    for(auto i:ans){
       cout<<i.first<<" "<<i.second<<"\n";
    }cout<<endl;
}