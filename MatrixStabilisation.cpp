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
       ll n,m;
       cin>>n>>m;
       int a[n][m];
       AJ(i,0,n){
        AJ(j,0,m){
            cin>>a[i][j];
        }
       }
       int f=0;
       if(n!=1&&m!=1){
            AJ(i,0,n){
              AJ(j,0,m){
                 if(i!=0&&i!=n-1){
                     if(j!=0&&j!=m-1){
                        if(a[i][j]>a[i-1][j]&&a[i][j]>a[i+1][j]&&a[i][j]>a[i][j-1]&&a[i][j]>a[i][j+1]){
                            int ans=max(a[i-1][j],a[i+1][j]);
                            ans=max(ans,a[i][j-1]);
                            ans=max(ans,a[i][j+1]);
                            a[i][j]=ans;
                        }else{
                          f++;
                        }
                     }else if(j==0){
                        if(a[i][j]>a[i+1][j]&&a[i][j]>a[i][j+1]&&a[i][j]>a[i-1][j]){
                            a[i][j]=max(a[i+1][j],max(a[i][j+1],a[i-1][j]));
                         //    cout<<a[i][j]<<endl;
                        }else f++;                    
                     }else{
                        if(a[i][j]>a[i+1][j]&&a[i][j]>a[i][j-1]&&a[i][j]>a[i-1][j]){
                            a[i][j]=max(a[i+1][j],max(a[i][j-1],a[i-1][j]));
                         //    cout<<a[i][j]<<endl;
                        }else f++;  
                     }
                 }
                 else if(i==0){
                    if(j==0){
                        if(a[i][j]>a[i+1][j]&&a[i][j]>a[i][j+1]){
                            a[i][j]=max(a[i+1][j],a[i][j+1]);
                         //    cout<<a[i][j]<<endl;
                        }else f++;
                    }else if(j==m-1){
                        if(a[i][j]>a[i][j-1]&&a[i][j]>a[i+1][j]){
                            a[i][j]=max(a[i][j-1],a[i+1][j]);
                        }else f++;
                    }else{
                        if(a[i][j]>a[i][j-1]&&a[i][j]>a[i+1][j]&&a[i][j]>a[i][j+1]){
                            int v=max(a[i][j-1],a[i+1][j]);
                            v=max(v,a[i][j+1]); 
                            a[i][j]=v;
                        }else f++;
                    }
                 }else{
                     if(j==0){
                        if(a[i][j]>a[i-1][j]&&a[i][j]>a[i][j+1]){
                            a[i][j]=max(a[i-1][j],a[i][j+1]);
                        }else f++;                   
                     }else if(j==m-1){
                        if(a[i][j]>a[i][j-1]&&a[i][j]>a[i-1][j]){
                            a[i][j]=max(a[i][j-1],a[i-1][j]);
                         //    cout<<a[i][j]<<endl;
                        }else f++;                   
                     }else{
                        if(a[i][j]>a[i][j-1]&&a[i][j]>a[i-1][j]&&a[i][j]>a[i][j+1]){
                            int h=max(a[i][j-1],a[i-1][j]);
                            h=max(h,a[i][j+1]);
                            a[i][j]=h;
                        }else f++;                   
                     }
                 }    
             }
            }
        }else if(n==1&&m!=1){
            AJ(i,0,n){
                AJ(j,0,m){
                    int f=0;
                    if(i==0){
                        if(j==0){
                            if(a[i][j]>a[i][j+1]){
                                a[i][j]=a[i][j+1];
                            }else f++;
                        }else if(j==m-1){
                            if(a[i][j]>a[i][j-1]){
                                a[i][j]=a[i][j-1];
                            }else f++;
                        }else{
                            if(a[i][j]>a[i][j+1]&&a[i][j]>a[i][j-1]){
                                a[i][j]=max(a[i][j-1],a[i][j+1]);
                            }else f++;
                        }
                    }
                }
            }
        }else if(n!=1&&m==1){
            AJ(i,0,n){
                AJ(j,0,m){
                    int f=0;
                    if(j==0){
                        if(i==0){
                            if(a[i][j]>a[i+1][j]){
                                a[i][j]=a[i+1][j];
                            }else f++;
                        }else if(i==n-1){
                            if(a[i][j]>a[i-1][j]){
                                a[i][j]=a[i-1][j];
                            }else f++;
                        }else{
                            if(a[i][j]>a[i+1][j]&&a[i][j]>a[i-1][j]){
                                a[i][j]=max(a[i+1][j],a[i-1][j]);
                            }else f++;
                        }
                    }
                }
            }            
        }else{
            f++;
        }  
        AJ(i,0,n){
         AJ(j,0,m){
             cout<<a[i][j]<<" ";
         }cout<<endl;
        }
    }
}