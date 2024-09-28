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
        int n;
	    cin>>n;
	    vector<int> v(n);
	    long long k=0;
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	        if(v[i]<0) k++;
	    }
	    sort(v.begin(),v.end());
        deb(v);
	    long long c=0;
	    for(int i=0;i<n;i++){
	        c+=abs(v[i]);
	    }
        deb(c);
	    if(k&1){
            cout<<c+(2*v[k-1])<<endl;
	    }else cout<<c<<endl;
	    
    }
    return 0;
}