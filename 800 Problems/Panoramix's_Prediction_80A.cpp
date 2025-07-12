#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, f = 0, g = 0, h = 0, j;
    cin >> n >> m;
    if (n == 2 && m == 3)
    {
        cout << "YES" << "\n";
        exit(0);
    }
    for (int i = 2; i < n - 1; i++)
    {
        if (n % i == 0)
        {
            g = 1;
            break;
        }
    }
    if (g == 1)
    {
        cout << "NO" << "\n";
        exit(0);
    }
    for (int i = 2; i < m - 1; i++)
    {
        if (m % i == 0)
        {
            h = 1;
            break;
        }
    }
    if (h == 1)
    {
        cout << "NO" << "\n";
        exit(0);
    }
    j = m;
    while (j != n)
    {
        j--;
        for (int i = 2; i < j - 1; i++)
        {
            if (j % i == 0)
            {
                f++;
                break;
            }
        }
    }
    if ((m - n - 1) == f)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}