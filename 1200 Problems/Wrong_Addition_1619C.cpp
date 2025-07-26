#include <bits/stdc++.h>
using namespace std;
int main()
{
    // submit it in c++17
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool f, g;
    int t;
    long long int a, s, ans, j;
    cin >> t;
    while (t--)
    {
        ans = 0;
        f = 0;
        g = 0;
        j = 0;
        cin >> a >> s;
        while (s != 0)
        {
            if (s % 10 - a % 10 < 0 && s % 100 <= 19 && s % 100 - a % 10 >= 0)
            {
                ans += (s % 100 - a % 10) * pow(10, j);
                j++;
                s /= 100;
                a /= 10;
            }
            else if (s % 100 - a % 10 < 0)
            {
                cout << -1 << "\n";
                g = 1;
                break;
            }
            else if (s % 10 - a % 10 < 0 && s % 100 > 19)
            {
                cout << -1 << "\n";
                f = 1;
                break;
            }
            else
            {
                ans += (s % 10 - a % 10) * pow(10, j);
                j++;
                s /= 10;
                a /= 10;
            }
        }
        if (s == 0 && a > 0 && f != 1 && g != 1)
            cout << -1 << "\n";
        else if (f != 1 && g != 1)
            cout << ans << "\n";
    }
}