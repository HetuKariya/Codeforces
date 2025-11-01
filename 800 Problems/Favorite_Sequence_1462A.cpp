#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n;
        i = 0;
        j = n - 1;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        while (i < j)
        {
            cout << a[i] << " ";
            cout << a[j] << " ";
            i++;
            j--;
        }
        if (n % 2 != 0)
            cout << a[n / 2];
        cout << "\n";
    }
    return 0;
}