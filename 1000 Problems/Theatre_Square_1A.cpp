#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n, m, a, b = 0;
    cin >> n >> m >> a;
    if ((n / a) == 0 && (m / a) == 0)
    {
        b += 1;
        cout << b;
    }
    else if ((n / a) >= 1 && (m / a) == 0)
    {
        if ((n % a) != 0)
        {
            b += (n / a) + 1;
            cout << b;
        }
        else
        {
            b += (n / a);
            cout << b;
        }
    }
    else if ((m / a) >= 1 && (n / a) == 0)
    {
        if ((m % a != 0))
        {
            b += (m / a) + 1;
            cout << b;
        }
        else
        {
            b += (m / a);
            cout << b;
        }
    }
    else
    {
        if ((n % a != 0) && (m % a != 0))
        {
            b += (((n / a) + 1) * ((m / a) + 1));
            cout << b;
        }
        else if ((n % a == 0) && (m % a != 0))
        {
            b += ((n / a) * ((m / a) + 1));
            cout << b;
        }
        else if ((n % a != 0) && (m % a == 0))
        {
            b += (((n / a) + 1) * (m / a));
            cout << b;
        }
        else
        {
            b += ((n / a) * (m / a));
            cout << b;
        }
    }
    return 0;
}