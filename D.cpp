/* परिवर्तिनि संसारे मृतः को वा न जायते |
   स  जातो येन जातेन याति वंश समुन्नतिम् ||  */

#include <bits/stdc++.h>
using namespace std;
typedef long double lld;
typedef unsigned long long ull;
typedef long long ll;

#define test  \
    int t;    \
    cin >> t; \
    while (t--)
ll fastprime(ll a)
{
    if (a != 2 && a % 2 == 0 || a < 2)
        return 0;
    for (int i = 3; i * i <= a; i += 2)
        if (a % i == 0)
            return 0;
    return 1;
}
constexpr int MOD = 1000000007;

#ifndef ONLINE_JUDGE
#include "karpit.h"
#define deb(x...)                 \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define deb(x...)
#endif

long long binpow(long long a, long long b, int MOD)
{
    a = a % MOD;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = ((res % MOD) * (a % MOD)) % MOD;
        a = ((a % MOD) * (a % MOD)) % MOD;
        b >>= 1;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("error.txt", "w", stderr);
    freopen("output.txt", "w", stdout);
#endif

    test
    {
        ll n, m;
        cin >> n >> m;
        vector<vector<char>> a(n, vector<char>(m));
        vector<string> s;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        deb(a);
        int mini = min(n, m) / 2;

        for (int layer = 0; layer < mini; layer++)
        {
            string currl;

            for (int j = layer; j < m - layer; j++)
            {
                currl += a[layer][j];
            }

            for (int i = layer + 1; i < n - layer; i++)
            {
                currl += a[i][m - layer - 1];
            }

            for (int j = m - layer - 2; j >= layer; j--)
            {
                currl += a[n - layer - 1][j];
            }

            for (int i = n - layer - 2; i > layer; i--)
            {
                currl += a[i][layer];
            }

            s.push_back(currl + currl.substr(0, 3));
        }

        deb(s);
        int ans = 0;
        for (int i = 0; i < mini; i++)
        {
            for (int j = 0; j < s[i].size() - 3; j++)
            {
                if (s[i].substr(j, 4) == "1543")
                    ans++;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}