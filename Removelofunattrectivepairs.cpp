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
    /*---bkl question ----bhai rula diya isne to bc*/
       int n,d=1;
       cin>>n;
       ss s;
       cin>>s;
       int maxi=0;
    //    vector<int> v;
       map<char,int> mp;
       AJ(i,0,n){
        // if(s[i]==s[i+1]) d++;
        mp[s[i]]++;
        maxi=max(maxi,mp[s[i]]);
       }
       if(maxi>n/2) cout<<n-(n-maxi)*2<<endl;
       else cout<<n%2<<endl;
    //    debug(d);
    //    int ans=0;
    // //    for(auto i:mp){
    // //       ans=abs(ans-i.second);
    // //     //   debug(ans);
    // //    }
    //    for(auto i:mp){
    //     v.push_back(i.second);
    //    }
    //    sort(v.rbegin(),v.rend());
    //    debug(v);
    //    for(auto i:v){
    //     ans=abs(ans-i);
    //    }
    //    debug(ans);
    //    int c=1;
    //    AJ(i,1,v.size()){
    //     if(v[i]==v[i-1]) c++;
    //    }
    //    debug(c);
    //    if(d==n) cout<<n<<endl;
    //    else if(d==1){
    //     if(n%2==0){
    //         cout<<0<<endl;
    //     }else{
    //         cout<<1<<endl;
    //     }
    //    }
    //    else if(c==v.size()){
    //       if(n%2==0){
    //           cout<<0<<endl;
    //       }else{
    //           cout<<1<<endl;
    //       }
    //    }else{
    //       cout<<ans<<endl;
    //    }
    } 
}