#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    if (x1 == x2 && x2 == x3)
        cout << 0 << "\n";
    else if (x1 == x2)
        cout << abs(x1 - x2) << "\n";
    else if (x3 == x2)
        cout << abs(x1 - x3) << "\n";
    else if (x1 == x3)
        cout << abs(x2 - x3) << "\n";
    else if ((x1 > x2 && x1 < x3) || (x1 > x3 && x1 < x2))
        cout << abs(x1 - x3) + abs(x1 - x2) << "\n";
    else if ((x2 > x1 && x2 < x3) || (x2 < x1 && x2 > x3))
        cout << abs(x2 - x1) + abs(x2 - x3) << "\n";
    else if ((x3 > x1 && x3 < x2) || (x3 < x1 && x3 > x2))
        cout << abs(x3 - x1) + abs(x3 - x2) << "\n";
    return 0;
}