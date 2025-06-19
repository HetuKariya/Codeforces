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
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        int val = 0, c = 0, len = sizeof(a) / sizeof(a[0]);
        sort(a, a + len);
        for (int i = 0; i < n; i++)
        {
            if (a[0] < a[1])
            {
                val = a[0];
                break;
            }
            else if (a[n - 2] < a[n - 1])
            {
                val = a[n - 1];
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (val == b[i])
            {
                c = i + 1;
                break;
            }
        }
        cout << c << "\n";
    }
    return 0;
}