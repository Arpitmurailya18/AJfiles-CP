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

// void dfs(int root, vector<int> *edges, int parent){
//      cout<<root+1<<" ";
//      for(auto i:edges[root]){
//        if(i!=parent){
//         dfs(i,edges,root);
//        }
//      }
// }

// void solve(){
//     int n;
//     cin>>n;
//     vector<int> *edges = new vector<int>[n];
//     AJ(i,0,n-1){
//         int a,b;
//         cin>>a>>b;
//         edges[a-1].push_back(b-1);
//         edges[b-1].push_back(a-1);
//     }
//     dfs(0,edges,-1);
//     cout<<endl;
//     dfs(3,edges,-1);
// }
map <int ,int> mp;

void dfs(int root,vector<int> *edges, int parent,int count[],int n){
    count[root]=1;
    for(auto i:edges[root]){
        if(i!=parent){
            dfs(i,edges,root,count,n);
            count[root]+=count[i];
        }
    }
}
void solve(){
    int n;
    cin>>n;
    int count[n];
    vector<int> *edges =new vector<int>[n];
    AJ(i,0,n-1){
        int a;
        cin>>a;
        edges[a-1].push_back(i+2-1);
        edges[i+2-1].push_back(a-1);
    }
    dfs(0,edges,-1,count,n);
    AJ(i,0,n){
        cout<<count[i]-1<<" ";
    }cout<<endl;
}
int main(){
    fastio


#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("error.txt", "w", stderr); 
        freopen("output.txt", "w", stdout);
#endif
    
    solve();  
}