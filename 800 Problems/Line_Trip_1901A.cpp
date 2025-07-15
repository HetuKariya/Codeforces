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
        int n, x;
        cin >> n >> x;
        int a[n], b[n + 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int j = 0; j < n + 1; j++)
        {
            if (j == 0)
                b[j] = a[j];
            else if (j == n)
                b[j] = (x - a[n - 1]) * 2;
            else
                b[j] = a[j] - a[j - 1];
        }
        int size = sizeof(b) / sizeof(b[0]);
        cout << *max_element(b, b + size) << "\n";
    }
    return 0;
}