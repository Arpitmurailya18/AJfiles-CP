#include <bits/stdc++.h>
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
#define AJ(i, a, b) for (int i = a; i < b; i++)
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
constexpr long long MOD = 1000000007;

#ifndef ONLINE_JUDGE
#include "karpit.h"
#define deb(x...)                 \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define deb(x...)
#endif

ll f(ll i, ll j, vector<vector<ll>> &dp)
{

    if (i == 0 && j == 0)
        return 1;
    if (i < 0 || j < 0)
        return 0;

    if (dp[i][j] != -1)
        return dp[i][j];

    ll up = (i + 1) * (j + 1) + f(i - 1, j, dp);
    ll left = (i + 1) * (j + 1) + f(i, j - 1, dp);

    return dp[i][j] = max(up, left);
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
        long long n;
        cin >> n;
        const long long inv2 = (MOD + 1)/2;
        const long long inv3 = (MOD + 1)/3;
        long long k = ((((n % MOD) * ((n + 1) % MOD) % MOD) * ((2 * n + 1) % MOD) % MOD) * inv3 % MOD) - ((((n % MOD) * ((n + 1) % MOD) % MOD) * inv2 % MOD) % MOD);
        k = (k + MOD) % MOD;
        deb(k);
        long long ans = 2022 * k % MOD;
        deb(ans);
        cout << ans % MOD << "\n";
    }
    return 0;
}