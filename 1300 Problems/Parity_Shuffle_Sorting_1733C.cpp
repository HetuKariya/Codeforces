#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool f;
    vector<int> ans;
    int t, n, cnt, cnttot;
    cin >> t;
    while (t--)
    {
        f = 0;
        cnt = 0;
        cnttot = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n == 1)
            cout << 0 << "\n";
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i + 1] - a[i] >= 0)
                    cnt++;
                else
                    break;
            }
            if (cnt == n - 1)
            {
                cout << 0 << "\n";
                f = 1;
            }
            else if (a[0] + a[n - 1] % 2 == 0)
            {
                cnttot++;
                a[0] = a[n - 1];
            }
            else
            {
                cnttot++;
                a[n - 1] = a[0];
            }
            ans.push_back(1);
            ans.push_back(n);
            for (int i = 1; i < n - 1; i++)
            {
                if ((a[i] + a[0]) % 2 != 0)
                {
                    ans.push_back(1);
                    ans.push_back(i + 1);
                    a[i] = a[0];
                    cnttot++;
                }
                else
                {
                    ans.push_back(i + 1);
                    ans.push_back(n);
                    a[i] = a[n - 1];
                    cnttot++;
                }
            }
            if (f == 0)
            {
                cout << cnttot << "\n";
                for (int i = 0; i < int(ans.size()); i++)
                {
                    if (i % 2 == 0 && i != 0)
                        cout << "\n";
                    cout << ans[i] << " ";
                }
                cout << "\n";
            }
        }
        ans.clear();
    }
    return 0;
}