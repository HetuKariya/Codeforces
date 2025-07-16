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
        long long int n, k = 0, maximum = 0;
        cin >> n;
        long long int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                k += a[i] - a[i + 1];
                maximum = max(maximum, (a[i] - a[i + 1]));
                a[i + 1] = a[i];
            }
        }
        if (k == 0)
            cout << k << "\n";
        else
            cout << k + maximum << "\n";
    }
    return 0;
}