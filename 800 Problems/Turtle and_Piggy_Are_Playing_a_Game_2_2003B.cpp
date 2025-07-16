#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    long int n, size;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        size = sizeof(a) / sizeof(a[0]);
        sort(a, a + size);
        if (n % 2 != 0)
            cout << a[(n - 1) / 2] << "\n";
        else
            cout << max(a[n / 2], a[(n - 1) / 2]) << "\n";
    }
    return 0;
}