#include <bits/stdc++.h>
using namespace std;
int fect(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return n * fect(n - 1);
}
int main()
{
    cout << fect(10);

    return 0;
}