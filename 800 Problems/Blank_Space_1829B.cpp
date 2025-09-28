#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, cnt, m;
    cin >> t;
    while (t--)
    {
        cnt = 0;
        m = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
                cnt++;
            else
            {
                m = max(m, cnt);
                cnt = 0;
            }
        }
        m = max(m, cnt);
        cout << m << "\n";
    }
    return 0;
}