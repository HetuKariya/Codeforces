#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long int a[n], b[n - 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
            b[i] = a[i] + a[n - 1];
        int max = b[0];
        for (int i = 0; i < n - 1; i++)
        {
            if (b[i] > max)
                max = b[i];
        }
        cout << max << "\n";
    }
    return 0;
}