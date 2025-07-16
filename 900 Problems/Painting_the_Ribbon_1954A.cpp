#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    float t, n, m, k, min;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        min = n - ceil(n / m);
        if (k >= min)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}