#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, k, cnt;
    cin >> t;
    while (t--)
    {
        cnt = 0;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] <= a[i + 1])
                cnt++;
        }
        if (cnt == n - 1)
            cout << "YES\n";
        else if (k >= 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}