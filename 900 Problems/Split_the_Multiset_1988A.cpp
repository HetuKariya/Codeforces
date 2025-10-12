#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    float t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (n == 1)
            cout << 0 << "\n";
        else if (n <= k)
            cout << 1 << "\n";
        else
            cout << ceil((n - 1) / (k - 1)) << "\n";
    }
    return 0;
}