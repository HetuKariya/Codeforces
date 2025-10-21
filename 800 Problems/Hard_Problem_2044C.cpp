#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, m, a, b, c, cnt;
    cin >> t;
    while (t--)
    {
        cnt = 0;
        cin >> m >> a >> b >> c;
        if (a <= m)
            cnt += a;
        else
            cnt += m;
        if (b <= m)
            cnt += b;
        else
            cnt += m;
        if (2 * m - cnt >= c)
            cnt += c;
        else
            cnt += 2 * m - cnt;
        cout << cnt << "\n";
    }
    return 0;
}