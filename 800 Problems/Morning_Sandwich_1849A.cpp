#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, b, c, h, a;
    cin >> t;
    while (t--)
    {
        a = 0;
        cin >> b >> c >> h;
        if (b >= 2)
        {
            if ((c + h) < b)
            {
                a += 2;
                a += c + h;
                a += c + h - 1;
                cout << a << "\n";
            }
            else
            {
                a += (2 * b) - 1;
                cout << a << "\n";
            }
        }
        else
            cout << 0 << "\n";
    }
    return 0;
}