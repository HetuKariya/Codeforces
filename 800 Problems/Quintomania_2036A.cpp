#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool flag;
    int t, n;
    cin >> t;
    while (t--)
    {
        flag = true;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(a[i] - a[i + 1]) != 5 && abs(a[i] - a[i + 1]) != 7)
            {
                cout << "NO\n";
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
    }
    return 0;
}