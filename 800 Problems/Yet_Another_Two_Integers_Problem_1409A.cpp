#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long t;
    long int a, b, n = 0;
    cin >> t;
    while (t--)
    {
        cin >> a;
        cin >> b;
        if (abs(b - a) == long(0))
            cout << 0 << "\n";
        else if (abs(b - a) <= long(10))
            cout << 1 << "\n";
        else
        {
            n = abs(b - a) / long(10);
            if (abs(b - a) % 10 == 0)
                cout << n << "\n";
            else
                cout << n + 1 << "\n";
        }
    }
    return 0;
}