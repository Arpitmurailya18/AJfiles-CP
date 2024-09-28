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

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
 
template<typename T> void chmin (T &a, T &b) {if (a > b) swap(a, b);}
template<typename T> void chmax (T &a, T &b) {if (a < b) swap(a, b);}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
