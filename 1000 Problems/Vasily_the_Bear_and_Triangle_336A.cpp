#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int x, y, tot;
    cin >> x >> y;
    tot = abs(x) + abs(y);
    if (x > 0 && y > 0)
        cout << 0 << " " << tot << " " << tot << " " << 0;
    else if (x < 0 && y < 0)
        cout << (tot * -1) << " " << 0 << " " << 0 << " " << (tot * -1);
    else if (x < 0 && y > 0)
        cout << (tot * -1) << " " << 0 << " " << 0 << " " << tot;
    else if (x > 0 && y < 0)
        cout << 0 << " " << (tot * -1) << " " << tot << " " << 0;
    return 0;
}