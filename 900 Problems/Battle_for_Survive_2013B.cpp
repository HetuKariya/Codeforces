#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int t, n, val;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n == 2)
            cout << a[1] - a[0] << "\n";
        else
        {
            val = a[n - 2];
            sort(a, a + n - 2);
            for (int i = n - 3; i >= 0; i--)
                val -= a[i];
            cout << a[n - 1] - val << "\n";
        }
    }
    return 0;
}