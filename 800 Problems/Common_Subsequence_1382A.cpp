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
        int n, m, c = 0, f = 0;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i] == b[j])
                {
                    c = a[i];
                    f = 1;
                    break;
                }
            }
        }
        if (f == 1)
        {
            cout << "YES\n";
            cout << 1 << " " << c << "\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}