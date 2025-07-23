#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, m, sx, sy, d, cnt, cnt1;
    cin >> t;
    while (t--)
    {
        cnt = 0;
        cnt1 = 0;
        cin >> n >> m >> sx >> sy >> d;
        n--;
        m--;
        sx--;
        sy--;
        for (int i = 0; i <= n; i++)
        {
            if (abs(i - sx) + sy != d)
                cnt++;
        }
        for (int i = 1; i <= m; i++)
        {
            if (abs(i - sy) + abs(n - sx) != d)
                cnt++;
        }
        for (int i = 0; i <= m; i++)
        {
            if (abs(i - sy) + sx != d)
                cnt1++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (abs(i - sx) + abs(m - sy) != d)
                cnt1++;
        }
        if (cnt == n + m + 1 || cnt1 == n + m + 1)
            cout << n + m << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}