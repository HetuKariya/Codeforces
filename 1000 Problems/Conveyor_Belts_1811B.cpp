#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, x1, y1, x2, y2, v1, v2, v3, v4, ans1, ans2;
    cin >> t;
    while (t--)
    {
        cin >> n >> x1 >> y1 >> x2 >> y2;
        v1 = abs(x1 - (1 + (n - x1)));
        v2 = abs(y1 - (1 + (n - y1)));
        v3 = abs(x2 - (1 + (n - x2)));
        v4 = abs(y2 - (1 + (n - y2)));
        if (v1 > v2 && x1 <= n / 2)
            ans1 = x1;
        else if (v1 > v2 && x1 > n / 2)
            ans1 = 1 + (n - x1);
        else if (v2 >= v1 && y1 <= n / 2)
            ans1 = y1;
        else
            ans1 = 1 + (n - y1);
        if (v3 > v4 && x2 <= n / 2)
            ans2 = x2;
        else if (v3 > v4 && x2 > n / 2)
            ans2 = 1 + (n - x2);
        else if (v4 >= v3 && y2 <= n / 2)
            ans2 = y2;
        else
            ans2 = 1 + (n - y2);
        cout << abs(ans1 - ans2) << "\n";
    }
    return 0;
}