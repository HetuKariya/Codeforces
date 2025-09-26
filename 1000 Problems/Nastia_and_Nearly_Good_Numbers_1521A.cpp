#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (b == 2)
        {
            cout << "YES\n";
            cout << a << " " << a * b * 2 - a << " " << a * b * 2 << "\n";
        }
        else if (b != 1)
        {
            cout << "YES\n";
            cout << a << " " << a * b - a << " " << a * b << "\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}