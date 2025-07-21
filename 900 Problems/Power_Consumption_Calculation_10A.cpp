#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, p1, p2, p3, t1, t2, tot = 0, r, k = 1;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    int a[n][2];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1];
        tot += (a[i][1] - a[i][0]) * p1;
    }
    for (int i = 0; i < n; i++)
    {
        if (k < n)
        {
            r = a[k][0];
            r -= a[i][1];
            if (r > t1 && r - t1 > t2)
            {
                r -= t1 + t2;
                tot += p1 * t1 + p2 * t2 + p3 * r;
            }
            else if (r > t1 && r - t1 == t2)
                tot += p1 * t1 + p2 * t2;
            else if (r > t1 && r - t1 < t2)
            {
                r -= t1;
                tot += p1 * t1 + p2 * r;
            }
            else if (r == t1)
                tot += p1 * t1;
            else if (r < t1 && r > 0)
                tot += p1 * r;
            k++;
        }
        else
            cout << tot << "\n";
    }
    return 0;
}