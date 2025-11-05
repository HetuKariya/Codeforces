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
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] >= a[i + 1])
                a[i + 1] = (a[i + 1] * ((a[i] / a[i + 1]) + 1));
        }
        cout << a[n - 1] << "\n";
    }
    return 0;
}