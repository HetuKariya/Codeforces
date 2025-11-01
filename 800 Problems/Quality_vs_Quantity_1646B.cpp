#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long t, n, sum1, sum2, i, j;
    cin >> t;
    while (t--)
    {
        sum1 = 0;
        sum2 = 0;
        i = 2;
        cin >> n;
        j = n - 2;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        sum1 += a[0] + a[1];
        sum2 += a[n - 1];
        while (i < j && sum2 <= sum1)
        {
            sum2 += a[j];
            sum1 += a[i];
            i++;
            j--;
        }
        if (sum2 > sum1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}