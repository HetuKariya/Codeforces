#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, sum, size, cnt1, cnt2;
    cin >> t;
    while (t--)
    {
        cnt1 = 0;
        cnt2 = 0;
        sum = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 2 != 0)
            cout << "NO\n";
        else
        {
            size = sizeof(a) / sizeof(a[0]);
            sort(a, a + size);
            for (int i = n - 1; i >= 0; i--)
            {
                if (cnt1 == cnt2)
                    cnt1 += a[i];
                else if (cnt1 > cnt2)
                    cnt2 += a[i];
                else
                    cnt1 += a[i];
            }
            if (cnt1 == cnt2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}