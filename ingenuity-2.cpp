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
       int n;
       cin>>n;
       ss s;
       cin>>s;
       map<char,int> mp;
       AJ(i,0,n) {
        mp[s[i]]++;
       }
       int f=mp['N'];
       int g=mp['E'];
       int rmNS=abs(mp['N']-mp['S']);
       int k=rmNS;
       int rmEW=abs(mp['E']-mp['W']);
       int l=rmEW;
       if(n&1!=0|| rmNS&1!=0 || rmEW&1!=0||(n==2&&rmNS==0&&rmEW==0)){
        cout<<"NO"<<endl;
       }else{
        // if(rmNS==0){

        // }
        if(mp['N']==mp['S']&&mp['S']==mp['E']&&mp['E']==mp['W']){
            AJ(i,0,n){
                if(s[i]=='E'||s[i]=='W') s[i]='H';
                else s[i]='R';
            }
        }else{
            if(k==0){
                AJ(i,0,n){
                   if(s[i]=='N'){
                       if(mp['N']>f/2){
                       //   cout<<'R';
                         s[i]='R';
                         mp['N']--;
                       }else{
                           if(mp['N']>0){
                               // cout<<'H';
                               s[i]='H';
                               mp['N']--;
                           }
                       }
                   }
                }
                AJ(i,0,n){
                   if(s[i]=='S'){
                       if(mp['S']>f/2){
                       //   cout<<'R';
                         s[i]='R';
                         mp['S']--;
                       }else{
                           if(mp['S']>0){
                               // cout<<'H';
                               s[i]='H';
                               mp['S']--;
                           }
                       }
                   }
                }
            }
            if(l==0){
                AJ(i,0,n){
                   if(s[i]=='E'){
                       if(mp['E']>g/2){
                       //   cout<<'R';
                         s[i]='R';
                         mp['E']--;
                       }else{
                           if(mp['E']>0){
                               // cout<<'H';
                               s[i]='H';
                               mp['E']--;
                           }
                       }
                   }
                }
                AJ(i,0,n){
                   if(s[i]=='W'){
                       if(mp['W']>g/2){
                       //   cout<<'R';
                         s[i]='R';
                         mp['W']--;
                       }else{
                           if(mp['W']>0){
                               // cout<<'H';
                               s[i]='H';
                               mp['W']--;
                           }
                       }
                   }
                }
            }
        }
        AJ(i,0,n){
            if(mp['N']>mp['S']){
                if(s[i]=='N'){
                    if(rmNS>k/2){
                    //   cout<<'R';
                      s[i]='R';
                      rmNS--;
                    }else{
                        if(rmNS>0){
                            // cout<<'H';
                            s[i]='H';
                            rmNS--;
                        }
                    }
                }
            }else{
                if(s[i]=='S'){
                    if(rmNS>k/2){
                    //   cout<<'R';
                      s[i]='R';
                      rmNS--;
                    }else{
                        if(rmNS>0){
                            // cout<<'H';
                            s[i]='H';
                            rmNS--;
                        }
                    }
                }
            }
            if(mp['E']>mp['W']){
                if(s[i]=='E'){
                    if(rmEW>l/2){
                    //   cout<<'R';
                      s[i]='R';
                      rmEW--;
                    }else{
                        if(rmEW>0){
                            // cout<<'H';
                            s[i]='H';
                            rmEW--;
                        }
                    }
                }
            }else{
                if(s[i]=='W'){
                    if(rmEW>l/2){
                    //   cout<<'R';
                      s[i]='R';
                      rmEW--;
                    }else{
                        if(rmEW>0){
                            // cout<<'H';
                            s[i]='H';
                            rmEW--;
                        }
                    }
                }
            }
        }
        // if(k==0){
        //     AJ(i,0,n){
        //        if(s[i]=='N'){
        //            if(mp['N']>f/2){
        //            //   cout<<'R';
        //              s[i]='R';
        //              mp['N']--;
        //            }else{
        //                if(mp['N']>0){
        //                    // cout<<'H';
        //                    s[i]='H';
        //                    mp['N']--;
        //                }
        //            }
        //        }
        //     }
        //     AJ(i,0,n){
        //        if(s[i]=='S'){
        //            if(mp['S']>f/2){
        //            //   cout<<'R';
        //              s[i]='R';
        //              mp['S']--;
        //            }else{
        //                if(mp['S']>0){
        //                    // cout<<'H';
        //                    s[i]='H';
        //                    mp['S']--;
        //                }
        //            }
        //        }
        //     }
        // }
        // if(l==0){
        //     AJ(i,0,n){
        //        if(s[i]=='E'){
        //            if(mp['E']>g/2){
        //            //   cout<<'R';
        //              s[i]='R';
        //              mp['E']--;
        //            }else{
        //                if(mp['E']>0){
        //                    // cout<<'H';
        //                    s[i]='H';
        //                    mp['E']--;
        //                }
        //            }
        //        }
        //     }
        //     AJ(i,0,n){
        //        if(s[i]=='W'){
        //            if(mp['W']>g/2){
        //            //   cout<<'R';
        //              s[i]='R';
        //              mp['W']--;
        //            }else{
        //                if(mp['W']>0){
        //                    // cout<<'H';
        //                    s[i]='H';
        //                    mp['W']--;
        //                }
        //            }
        //        }
        //     }
        // }
        AJ(i,0,n){
            if(s[i]!='R'&&s[i]!='H'){
                s[i]='R';
            }
        }
        cout<<s<<endl;
       }
    } 
}