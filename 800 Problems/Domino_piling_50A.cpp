#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m, n, no = 0;
    cin >> m;
    cin >> n;
    if (m < 2 && n < 2)
    {
        cout << 0;
    }
    else if (m == 1 && n >= 2)
    {
        no = n / 2;
        cout << no;
    }
    else if (m >= 2 && n == 1)
    {
        no = m / 2;
        cout << no;
    }
    else if (m % 2 == 0 && n % 2 != 0 && m >= 2 && n >= 2)
    {
        no += m / 2;
        no += ((n - 1) / 2) * m;
        cout << no;
    }
    else if (m % 2 != 0 && n % 2 == 0 && m >= 2 && n >= 2)
    {
        no += n / 2;
        no += ((m - 1) / 2) * n;
        cout << no;
    }
    else if (m % 2 == 0 && n % 2 == 0 && m >= 2 && n >= 2)
    {
        no += m / 2;
        no += (n - 1) * (m / 2);
        cout << no;
    }
    else if (m % 2 != 0 && n % 2 != 0 && m >= 2 && n >= 2)
    {
        no += m / 2;
        no += (n - 1) * (m / 2);
        no += (n - 1) / 2;
        cout << no;
    }
    return 0;
}