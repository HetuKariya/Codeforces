#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, m;
    long a, b, c, d;
    cin >> t;
    while (t--)
    {
        m = 0;
        cin >> a >> b >> c >> d;
        if (a > b && a > c && a > d)
            cout << m << "\n";
        else if (a > b && a > c && a < d)
        {
            m++;
            cout << m << "\n";
        }
        else if (a > b && a < c && a > d)
        {
            m++;
            cout << m << "\n";
        }
        else if (a > c && a > d && a < b)
        {
            m++;
            cout << m << "\n";
        }
        else if (a > b && a < c && a < d)
        {
            m += 2;
            cout << m << "\n";
        }
        else if (a > c && a < b && a < d)
        {
            m += 2;
            cout << m << "\n";
        }
        else if (a > d && a < b && a < c)
        {
            m += 2;
            cout << m << "\n";
        }
        else
        {
            m += 3;
            cout << m << "\n";
        }
    }
    return 0;
}