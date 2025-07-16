#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, x, y, z, sx = 0, sy = 0, sz = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        sx += x;
        sy += y;
        sz += z;
    }
    if (sx == 0 && sy == 0 && sz == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}