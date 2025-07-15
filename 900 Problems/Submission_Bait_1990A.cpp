#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, f;
    cin >> t;
    while (t--)
    {
        f = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int size = sizeof(a) / sizeof(a[0]);
        for (int i = 0; i < n; i++)
        {
            int b = count(a, a + size, a[i]);
            if (b % 2 != 0)
            {
                cout << "YES\n";
                f = 1;
                break;
            }
        }
        if (f == 0)
            cout << "NO\n";
    }
    return 0;
}