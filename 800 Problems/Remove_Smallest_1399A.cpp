#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, b = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int len = sizeof(a) / sizeof(a[0]);
        sort(a, a + len);
        if (len == 1)
            cout << "YES\n";
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (abs(a[i] - a[i + 1]) > 1)
                {
                    cout << "NO\n";
                    break;
                }
                else
                    b++;
            }
            if (b == n - 1)
                cout << "YES\n";
        }
    }
    return 0;
}