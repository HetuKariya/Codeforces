#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n, k, l = 0, i = 1, j = 2;
    cin >> n >> k;
    if (k == 1)
    {
        cout << k;
        exit(0);
    }
    else if (k == (n / 2) + 1 && n % 2 == 0)
    {
        cout << 2;
        exit(0);
    }
    else if (k == (n / 2) + 2 && n % 2 != 0)
    {
        cout << 2;
        exit(0);
    }
    else if (k == n && n % 2 != 0)
    {
        cout << n - 1;
        exit(0);
    }
    else if (k == n && n % 2 == 0)
    {
        cout << n;
        exit(0);
    }
    if (n % 2 == 0)
    {
        if ((k - i) <= (n / 2) - 1)
        {
            i += ((k - i) * 2);
            cout << i;
        }
        else
        {
            l += (k - (n / 2)) - j;
            j += (k - (n / 2)) + l;
            cout << j;
        }
    }
    else
    {
        if ((k - i) <= (n / 2))
        {
            i += ((k - i) * 2);
            cout << i;
        }
        else
        {
            l += (k - (n / 2) - 1) - j;
            j += (k - (n / 2) - 1) + l;
            cout << j;
        }
    }
    return 0;
}