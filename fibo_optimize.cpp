#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll N = 1e6 + 5;
ll dp[N];
ll fibo_optimize(ll n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }

    ll ans = fibo_optimize(n - 1) + fibo_optimize(n - 2);
    dp[n] = ans;
    return ans;
}
int main()
{
    memset(dp, -1, sizeof(dp));
    ll n;
    cin >> n;
    cout << fibo_optimize(n);
    return 0;
}