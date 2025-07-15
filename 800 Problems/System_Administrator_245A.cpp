#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, total1 = 0, totalx1 = 0, total2 = 0, totalx2 = 0;
    cin >> n;
    while (n--)
    {
        int t, x, y;
        cin >> t >> x >> y;
        if (t == 1)
        {
            total1 += x + y;
            totalx1 += x;
        }
        else
        {
            total2 += x + y;
            totalx2 += x;
        }
    }
    if (totalx1 >= total1 / 2)
        cout << "LIVE\n";
    else
        cout << "DEAD\n";
    if (totalx2 >= total2 / 2)
        cout << "LIVE\n";
    else
        cout << "DEAD\n";
    return 0;
}