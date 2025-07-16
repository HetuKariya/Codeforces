#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, size, cnt1, cnt2;
    cin >> t;
    while (t--)
    {
        cnt1 = 1;
        cnt2 = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        size = sizeof(a) / sizeof(a[0]);
        sort(a, a + size);
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1] && cnt1 < 3)
                cnt1++;
            if (cnt1 >= 3)
            {
                cnt1 = 1;
                cnt2++;
                i++;
            }
            if (a[i] != a[i + 1])
                cnt1 = 1;
        }
        cout << cnt2 << "\n";
    }
    return 0;
}