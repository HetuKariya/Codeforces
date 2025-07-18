#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    long long int a, b, c, d;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        if (a - b > 0)
        {
            if (c - d <= 0)
            {
                cout << -1 << "\n";
                continue;
            }
            if ((a - b) % (c - d) == 0)
                cout << b + (((a - b) / (c - d)) * c) << "\n";
            else
                cout << b + (((a - b) / (c - d) + 1) * c) << "\n";
        }
        else
            cout << b << "\n";
    }
    return 0;
}