#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, cnt, cnt2, index;
    cin >> t;
    while (t--)
    {
        cnt = 0;
        cnt2 = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 2)
                cnt2++;
        }
        if ((cnt2 % 2))
            cout << -1 << "\n";
        else if (cnt2 != 0)
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] == 2 && cnt < cnt2 / 2)
                {
                    cnt++;
                    index = i;
                }
            }
            cout << index + 1 << "\n";
        }
        else
            cout << 1 << "\n";
    }
    return 0;
}