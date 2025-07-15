#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b;
        c = max(a, b);
        d = min(a, b);
        if (d + d - c > 0)
        {
            d += d;
            c += d - c;
            cout << c * d << "\n";
        }
        else if (d + d - c == 0)
        {
            d += d;
            cout << c * d << "\n";
        }
        else
        {
            d += c - d;
            cout << c * d << "\n";
        }
    }
    return 0;
}