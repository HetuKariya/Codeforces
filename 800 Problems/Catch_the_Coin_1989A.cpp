#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (y >= -1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}