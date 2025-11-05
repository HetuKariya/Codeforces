#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, val, idx, mn;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    if (a[n - 1] <= 2 * a[0])
        cout << 0;
    else
    {
        mn = INT_MAX;
        for (int k = 0; k < n; k++)
        {
            val = a[k] * 2;
            idx = upper_bound(a, a + n, val) - a;
            mn = min(mn, k + n - idx);
        }
        cout << mn;
    }
    return 0;
}