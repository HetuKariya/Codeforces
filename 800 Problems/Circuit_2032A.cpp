#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, cnt0, cnt1;
    cin >> t;
    while (t--)
    {
        cnt0 = 0;
        cnt1 = 0;
        cin >> n;
        int a[2 * n];
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                cnt0++;
            else
                cnt1++;
        }
        if (cnt0 % 2 == 0 && cnt1 % 2 == 0)
            cout << 0 << " " << min(cnt0, cnt1) << "\n";
        else
            cout << 1 << " " << min(cnt0, cnt1) << "\n";
    }
    return 0;
}