#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    char c;
    long int n, m, s;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        long long int a[n], l, r, max;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        s = sizeof(a) / sizeof(a[0]);
        max = *max_element(a, a + s);
        for (int i = 0; i < m; i++)
        {
            cin >> c;
            cin >> l >> r;
            if (c == '+')
            {
                if (max >= l && max <= r)
                {
                    max++;
                    cout << max << "\n";
                }
                else
                    cout << max << "\n";
            }
            else
            {
                if (max >= l && max <= r)
                {
                    max--;
                    cout << max << "\n";
                }
                else
                    cout << max << "\n";
            }
        }
    }
    return 0;
}