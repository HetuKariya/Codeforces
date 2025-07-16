#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, sum;
    cin >> t;
    while (t--)
    {
        sum = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i % 2 == 0)
                sum += a[i];
            else
                sum += (a[i] * -1);
        }
        cout << sum << "\n";
    }
    return 0;
}