#include <bits/stdc++.h>
using namespace std;

#ifndef itzzRaghav
#define dbg(...) ;
#define debug(...) ;
#define crndl ;
#endif

// #ifndef ONLINE_JUDGE
// #define debug(x) cerr<<#x<<" "; _print(x); cerr<<endl;
// #else
// #define debug(x);
// #endif
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
// #ifndef ONLINE_JUDGE
//         freopen("input.txt", "r", stdin);
//         freopen("error.txt", "w", stderr); 
//         freopen("output.txt", "w", stdout);
// #endif
    auto solve = [&] () {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &x: a) cin >> x;

        if (n == 2) {
            cout << min(a[0], a[1]) << '\n';
            return;
        }

        int ans = 0;

        for (int i = 0; i < n - 2; i++) {
            int b[3] = {a[i], a[i + 1], a[i + 2]};
            sort(b, b + 3);
            ans = max(ans, b[1]);
        }

        cout << ans << '\n';
    };
    
    int t = 1;
    cin >> t;
    
    for (int tc = 1; tc <= t; tc++) {
        // debug(Testcase, tc);
        solve();
        crndl;
    }
    
    return 0;
}