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

void printbinary(int num){
    for(int i=10;i>=0; --i){
        cout<<((num>>i)&1);
    }cout<<endl;
}
int main(){
    fastio


#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("error.txt", "w", stderr); 
        freopen("output.txt", "w", stdout);
#endif
    test{
     /*  int n,k;
       cin>>n>>k;
       printbinary(n);
       debug(n);
       debug(k);
       if((n&(1<<k)) != 0){
         cout<<"set bit"<<endl;
       }else{
        cout<<"not set bit"<<endl;
       }

       printbinary(n|(1<<k));  //unset to set bit 
       printbinary(n&(~(1<<k)));  //set to unset bit

       // tougle a bit
       printbinary(n^(1<<k));
       //to count set bit
       int c=0;
       for(int i=31;i>=0;--i){
        if((n&(1<<i))!=0){
            c++;
        }
       }
       cout<<c<<endl;
       // to count set bit with buit in function of cpp
       cout<<__builtin_popcount(n)<<endl;
       // count for long long values
       cout<<__builtin_popcountll((1LL<<34)-1)<<endl;

       */

    //   AJ(i,0,8){
    //     printbinary(i);
    //     if(i&1){
    //         cout<<"odd value\n";
    //     }else{
    //         cout<<"even value\n";
    //     }
    //   }
    /*
      int n;
      cin>>n;
      // n dividing by 2 or with power of 2
      cout<<(n>>1)<<"\n";
      // n multipling by 2 or with power of 2
      cout<<(n<<1)<<"\n";  
    */
      for(char c='A';c<='D';++c){
        cout<<c<<endl;
        printbinary(int(c));
      }
      for(char c='a';c<='d';++c){
        cout<<c<<endl;
        printbinary(int(c));
      }
      // To convert capital to lower char
      for(char c='A';c<='D';++c){
        // char s= c| (1<<5);
        char s= c| ' ';
        cout<<s<<endl;
      }
      // To convert lower to capital char
      for(char c='a';c<='d';++c){
        // char s= c & (~(1<<5));
        // char s= c & (~(' '));
        char s= c & '_';
        cout<<s<<"\n";
      }
    } 
}