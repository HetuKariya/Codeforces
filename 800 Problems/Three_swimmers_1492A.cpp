#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long int p, a, b, c, d, e, f;
        cin >> p >> a >> b >> c;
        d = p % a;
        e = p % b;
        f = p % c;
        if (d == 0)
            cout << d << "\n";
        else if (e == 0)
            cout << e << "\n";
        else if (f == 0)
            cout << f << "\n";
        else
        {
            d = a - d;
            e = b - e;
            f = c - f;
            if (d <= e && d <= f)
                cout << d << "\n";
            else if (e <= d && e <= f)
                cout << e << "\n";
            else
                cout << f << "\n";
        }
    }
    return 0;
}