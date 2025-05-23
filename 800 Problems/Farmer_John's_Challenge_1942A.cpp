#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (n == k)
        {
            for (int i = 1; i <= n; i++)
                cout << k << " ";
        }
        else if (k < n && k == 1)
        {
            for (int i = 1; i <= n; i++)
                cout << i << " ";
        }
        else
            cout << -1;
        cout << "\n";
    }
    return 0;
}