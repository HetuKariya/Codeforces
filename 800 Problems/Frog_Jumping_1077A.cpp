#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, k, c = 0, d = 0;
        cin >> a >> b >> k;
        if (k % 2 != 0)
        {
            c += a;
            d = ((k - 1) / 2);
            a *= d;
            b *= (d * (-1));
            c += a + b;
            cout << c << "\n";
        }
        else
        {
            d = (k / 2);
            a *= d;
            b *= (d * (-1));
            c += a + b;
            cout << c << "\n";
        }
    }
    return 0;
}