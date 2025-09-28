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
        int n, cnt = 0, size, max;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (b[i] == b[i + 1])
                cnt++;
        }
        if (cnt == n - 1)
        {
            for (int i = 0; i < n; i++)
                cout << 0 << " ";
        }
        else
        {
            size = sizeof(a) / sizeof(a[0]);
            sort(a, a + size);
            max = a[n - 1];
            for (int i = 0; i < n; i++)
            {
                if (b[i] == max)
                    cout << b[i] - a[n - 2] << " ";
                else
                    cout << b[i] - a[n - 1] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}