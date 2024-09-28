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
#define test int t; cin>>t; while(t--)
ll fastprime(ll a){ if (a != 2 && a % 2 == 0 || a < 2) return 0;  for(int i = 3; i * i <= a; i += 2) if(a % i == 0) return 0; return 1;}
constexpr int MOD=1000000007;

#ifndef ONLINE_JUDGE
#include "karpit.h"
#define deb(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define deb(x...)
#endif

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    test {
    //    cout<<t<<endl;
       int n;
       cin>>n;
       char trm;
       cin>>trm;
       vector<string> v(2*n);
       map<char,int> mp;
       map<char, char> mpc,mpd,mph,mps;
       for(int i=0;i<2*n;i++){
        cin>>v[i];
        // char k=
        mp[v[i][1]]++;
        if(v[i][1]=='C') mpc[v[i][0]]=v[i][1];
        if(v[i][1]=='D') mpd[v[i][0]]=v[i][1];
        if(v[i][1]=='H') mph[v[i][0]]=v[i][1];
        if(v[i][1]=='S') mps[v[i][0]]=v[i][1];
       }
       deb(mpc);
       deb(mpd);
       deb(mph);
       deb(mps);
    //    sort(v.begin(),v.end());
       deb(v);
       deb(mp);
       int c=0;
       for(auto i:mp){
        if((i.second&1)&&(i.first!=trm)) c++;
       }
       int trmCount=mp[trm];
       if(trmCount%2==0&&c%2==0&&trmCount-c>=0){
        int cc=mp['C'],dc=mp['D'],hc=mp['H'],sc=mp['S'];
        if(cc&1){
          int ok=0;
          for(auto i=mpc.begin();i!=mpc.end()&&ok<cc-1;i++){
            cout<<i->first<<i->second<<" ";
            i++;
            cout<<i->first<<i->second<<"\n";
            ok+=2;
          }
          if(trm!='C'){auto last=prev(mpc.end());
          cout<<last->first<<last->second<<" ";
          }
          if(trm=='S'){
            auto f=mps.begin();
            cout<<f->first<<f->second<<"\n";
            mps.erase(mps.begin());           
          }
          else if(trm=='D'){
            auto f=mpd.begin();
            cout<<f->first<<f->second<<"\n";
            mpd.erase(mpd.begin());           
          }
          else if(trm=='H'){
            auto f=mph.begin();
            cout<<f->first<<f->second<<"\n";
            mph.erase(mph.begin());           
          }
        }else{            
           if(trm!='C'){
            for(auto i=mpc.begin();i!=mpc.end();i++){
            cout<<i->first<<i->second<<" ";
            i++;
            cout<<i->first<<i->second<<"\n";
            }
          }
        }
        if(dc&1){
          int ok=0;
          for(auto i=mpd.begin();i!=mpd.end()&&ok<dc-1;i++){
            cout<<i->first<<i->second<<" ";
            i++;
            cout<<i->first<<i->second<<"\n";
            ok+=2;
          }
          if(trm!='D'){auto last=prev(mpd.end());
          cout<<last->first<<last->second<<" ";
          }
          if(trm=='S'){
            auto f=mps.begin();
            cout<<f->first<<f->second<<"\n";
            mps.erase(mps.begin());           
          }
          else if(trm=='C'){
            auto f=mpc.begin();
            cout<<f->first<<f->second<<"\n";
            mpc.erase(mpc.begin());           
          }
          else if(trm=='H'){
            auto f=mph.begin();
            cout<<f->first<<f->second<<"\n";
            mph.erase(mph.begin());           
          }
        }else{            
          if(trm!='D'){
            for(auto i=mpd.begin();i!=mpd.end();i++){
            cout<<i->first<<i->second<<" ";
            i++;
            cout<<i->first<<i->second<<"\n";
            }
          }
        }
        if(hc&1){
          int ok=0;
          for(auto i=mph.begin();i!=mph.end()&&ok<hc-1;i++){
            cout<<i->first<<i->second<<" ";
            i++;
            cout<<i->first<<i->second<<"\n";
            ok+=2;
          }
          if(trm!='H'){auto last=prev(mph.end());
          cout<<last->first<<last->second<<" ";
          }
          if(trm=='S'){
            auto f=mps.begin();
            cout<<f->first<<f->second<<"\n";
            mps.erase(mps.begin());           
          }
          else if(trm=='C'){
            auto f=mpc.begin();
            cout<<f->first<<f->second<<"\n";
            mpc.erase(mpc.begin());           
          }
          else if(trm=='D'){
            auto f=mpd.begin();
            cout<<f->first<<f->second<<"\n";
            mpd.erase(mpd.begin());           
          }          
        }else{            
          if(trm!='H'){
            for(auto i=mph.begin();i!=mph.end();i++){
            cout<<i->first<<i->second<<" ";
            i++;
            cout<<i->first<<i->second<<"\n";
            }
          }
        }
        if(sc&1){
          int ok=0;
          for(auto i=mps.begin();i!=mps.end()&&ok<sc-1;i++){
            cout<<i->first<<i->second<<" ";
            i++;
            cout<<i->first<<i->second<<"\n";
            ok+=2;
          }
          if(trm!='S'){auto last=prev(mps.end());
            cout<<last->first<<last->second<<" ";
          }
          if(trm=='D'){
            auto f=mpd.begin();
            cout<<f->first<<f->second<<"\n";
            mpd.erase(mpd.begin());           
          }
          else if(trm=='C'){
            auto f=mpc.begin();
            cout<<f->first<<f->second<<"\n";
            mpc.erase(mpc.begin());           
          }
          else if(trm=='H'){
            auto f=mph.begin();
            cout<<f->first<<f->second<<"\n";
            mph.erase(mph.begin());           
          }          
        }else{            
          if(trm!='S'){
            for(auto i=mps.begin();i!=mps.end();i++){
            cout<<i->first<<i->second<<" ";
            i++;
            cout<<i->first<<i->second<<"\n";
            }
          }
        }
        if(trm=='D'){
           for(auto i=mpd.begin();i!=mpd.end();i++){
            cout<<i->first<<i->second<<" ";
            i++;
            cout<<i->first<<i->second<<"\n";
           }           
        }
        else if(trm=='C'){
           for(auto i=mpc.begin();i!=mpc.end();i++){
            cout<<i->first<<i->second<<" ";
            i++;
            cout<<i->first<<i->second<<"\n";
           }          
        }
        else if(trm=='H'){
           for(auto i=mph.begin();i!=mph.end();i++){
            cout<<i->first<<i->second<<" ";
            i++;
            cout<<i->first<<i->second<<"\n";
           }           
        }else{
           for(auto i=mps.begin();i!=mps.end();i++){
            cout<<i->first<<i->second<<" ";
            i++;
            cout<<i->first<<i->second<<"\n";
           }           
        }                

       }else if((trmCount%2==1&&c%2==1&&trmCount-c>=0)){
        int cc=mp['C'],dc=mp['D'],hc=mp['H'],sc=mp['S'];
        if(cc&1){
          int ok=0;
          for(auto i=mpc.begin();i!=mpc.end()&&ok<cc-1;i++){
            cout<<i->first<<i->second<<" ";
            i++;
            cout<<i->first<<i->second<<"\n";
            ok+=2;
          }
          if(trm!='C'){auto last=prev(mpc.end());
          cout<<last->first<<last->second<<" ";
          }
          if(trm=='S'){
            auto f=mps.begin();
            cout<<f->first<<f->second<<"\n";
            mps.erase(mps.begin());           
          }
          else if(trm=='D'){
            auto f=mpd.begin();
            cout<<f->first<<f->second<<"\n";
            mpd.erase(mpd.begin());           
          }
          else if(trm=='H'){
            auto f=mph.begin();
            cout<<f->first<<f->second<<"\n";
            mph.erase(mph.begin());           
          }
        }else{            
        //    if(trmCount==c&&trm=='C'){
            for(auto i=mpc.begin();i!=mpc.end();i++){
            cout<<i->first<<i->second<<" ";
            i++;
            cout<<i->first<<i->second<<"\n";
            }
        //   }
        }
        if(dc&1){
          int ok=0;
          for(auto i=mpd.begin();i!=mpd.end()&&ok<dc-1;i++){
            cout<<i->first<<i->second<<" ";
            i++;
            cout<<i->first<<i->second<<"\n";
            ok+=2;
          }
          if(trm!='D'){auto last=prev(mpd.end());
          cout<<last->first<<last->second<<" ";
          }
        //   if(trm=='S'){
        //     auto f=mps.begin();
        //     cout<<f->first<<f->second<<"\n";
        //     mps.erase(mps.begin());           
        //   }
        //   else if(trm=='C'){
        //     auto f=mpc.begin();
        //     cout<<f->first<<f->second<<"\n";
        //     mpc.erase(mpc.begin());           
        //   }
        //   else if(trm=='H'){
        //     auto f=mph.begin();
        //     cout<<f->first<<f->second<<"\n";
        //     mph.erase(mph.begin());           
        //   }
        }else{            
        //   if(trmCount==c&&trm=='D'){
            for(auto i=mpd.begin();i!=mpd.end();i++){
            cout<<i->first<<i->second<<" ";
            i++;
            cout<<i->first<<i->second<<"\n";
            }
        //   }
        }
        if(hc&1){
          int ok=0;
          for(auto i=mph.begin();i!=mph.end()&&ok<hc-1;i++){
            cout<<i->first<<i->second<<" ";
            i++;
            cout<<i->first<<i->second<<"\n";
            ok+=2;
          }
          if(trm!='H'){auto last=prev(mph.end());
          cout<<last->first<<last->second<<" ";
          }
        //   if(trm=='S'){
        //     auto f=mps.begin();
        //     cout<<f->first<<f->second<<"\n";
        //     mps.erase(mps.begin());           
        //   }
        //   else if(trm=='C'){
        //     auto f=mpc.begin();
        //     cout<<f->first<<f->second<<"\n";
        //     mpc.erase(mpc.begin());           
        //   }
        //   else if(trm=='D'){
        //     auto f=mpd.begin();
        //     cout<<f->first<<f->second<<"\n";
        //     mpd.erase(mpd.begin());           
        //   }          
        }else{            
        //   if(trmCount==c&&trm=='H'){
            for(auto i=mph.begin();i!=mph.end();i++){
            cout<<i->first<<i->second<<" ";
            i++;
            cout<<i->first<<i->second<<"\n";
            }
        //   }
        }
        if(sc&1){
          int ok=0;
          for(auto i=mps.begin();i!=mps.end()&&ok<sc-1;i++){
            cout<<i->first<<i->second<<" ";
            i++;
            cout<<i->first<<i->second<<"\n";
            ok+=2;
          }
          if(trm!='S'){auto last=prev(mps.end());
            cout<<last->first<<last->second<<" ";
          }
        //   if(trm=='D'){
        //     auto f=mpd.begin();
        //     cout<<f->first<<f->second<<"\n";
        //     mpd.erase(mpd.begin());           
        //   }
        //   else if(trm=='C'){
        //     auto f=mpc.begin();
        //     cout<<f->first<<f->second<<"\n";
        //     mpc.erase(mpc.begin());           
        //   }
        //   else if(trm=='H'){
        //     auto f=mph.begin();
        //     cout<<f->first<<f->second<<"\n";
        //     mph.erase(mph.begin());           
        //   }          
        }else{            
        //   if(trmCount==c&&trm=='S'){
            for(auto i=mps.begin();i!=mps.end();i++){
            cout<<i->first<<i->second<<" ";
            i++;
            cout<<i->first<<i->second<<"\n";
            }
        //   }
        }

       }else{
        cout<<"IMPOSSIBLE"<<"\n";
       }



    }
    return 0;
}