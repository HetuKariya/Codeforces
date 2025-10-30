#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long t, n, m;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cout << max(n, m) + 1 << "\n";
    }
    return 0;
}