#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, a, r, f;
    cin >> t;
    while (t--)
    {
        f = 0;
        cin >> a;
        while (a > 0)
        {
            r = a % 10;
            f += r;
            a /= 10;
        }
        cout << f << "\n";
    }
    return 0;
}