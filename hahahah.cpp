#include using namespace std;
#define ll long long 
#define rep(i, a, b) for (long long i = a; i < b; i++) 
#define all(v) v.begin(), v.end() 
#define endl '\n' 
#ifndef ONLINE_JUDGE #define deb(x) cout << #x << " " << x << "\n" 
#define deb2(x, y) cout << "[ " << #x << "=" << x << "," << #y << "=" << y << " ]\n" 
#define debe(x) \ cout << #x << ":[ "; \ for (auto i : x) \ { \ cout << i << " "; \ } \ cout << "]\n"; 
#else 
#define deb(x) 
#define deb2(x, y) 
#define debe(x) 
#endif 
const int MOD = 1000000007; 
bool solve(ll num){
    ll ct = 0; 
    for (ll i = 2; i < min(93000ll, num); i++)
    {
        if (((num % i) == 0)){
            ct++; if (i * i == num) ct++; 
        }
    } 
    if (ct <= 0) return 1; return 0; 
} 

signed main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    int t = 1; cin>> t; 
    while (t--){
        ll n;
        cin>> n; 
        string s; 
        cin>> s; 
        ll num = 0; 
        ll pdt = 1; 
        rep(i, 0, n){
            num += pdt * (s[i] - '0'); 
            pdt *= 2; 
        } 
        if (num == 1) cout << "ALICE" << endl; 
        else if (num == 2){
            cout << "BOB\n"; 
        } else if (((num % 2) == 1)){
            cout << "BOB" << endl; 
        } else {
            ll dup = num; 
            ll ct = 0; 
            while (dup % 2 == 0){
                dup /= 2; ct++; 
            } if (dup == 1){
                cout << "ALICE" << endl; 
            } else {
                if (ct == 1){
                    if (solve(dup)) cout << "ALICE" << endl; 
                    else cout << "BOB" << endl; 
                    
                } else cout << "BOB" << endl; 
                
            } 
                
        } 
    } 
    return 0; 
}