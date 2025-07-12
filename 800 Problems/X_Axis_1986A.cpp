#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, x1, x2, x3, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> x1 >> x2 >> x3;
        a = abs(x1 - x1) + abs(x1 - x2) + abs(x1 - x3);
        b = abs(x2 - x1) + abs(x2 - x2) + abs(x2 - x3);
        c = abs(x3 - x1) + abs(x3 - x2) + abs(x3 - x3);
        if (a <= b && a <= c)
            cout << a << "\n";
        else if (b <= a && b <= c)
            cout << b << "\n";
        else if (c <= a && c <= b)
            cout << c << "\n";
    }
    return 0;
}