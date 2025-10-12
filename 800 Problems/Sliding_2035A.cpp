#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int t, n, m, r, c;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> r >> c;
        cout << (n - r) * m + (m - c) + (m - 1) * (n - r) << "\n";
    }
    return 0;
}