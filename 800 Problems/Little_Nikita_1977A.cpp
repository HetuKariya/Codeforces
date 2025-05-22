#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> m;
        if (n == m)
            cout << "YES" << "\n";
        else if (n < m)
            cout << "NO" << "\n";
        else if (n > m && (n - m) % 2 == 0)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
    return 0;
}