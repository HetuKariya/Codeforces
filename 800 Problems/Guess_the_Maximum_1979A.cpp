#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, min = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long int a[n], b[n - 1];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        {
            b[i] = 0;
            if (a[i] > a[i + 1])
                b[i] = a[i] - 1;
            else if (a[i] < a[i + 1])
                b[i] = a[i + 1] - 1;
            else if (a[i] == a[i + 1])
                b[i] = a[i] - 1;
        }
        min = b[0];
        for (int i = 0; i < n - 1; i++)
        {
            if (min > b[i])
                min = b[i];
        }
        cout << min << "\n";
    }
    return 0;
}