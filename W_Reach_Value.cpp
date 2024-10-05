#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll input;
bool rec(int n)
{
    if (n > input)
        return false;

    if (n == input)
        return true;

    return rec(n * 10) || rec(n * 20);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> input;
        bool flg = rec(1);
        if (flg)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}