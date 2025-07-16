#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, f;
    long long int a, b, c, ansa, ansb, ansc;
    cin >> t;
    while (t--)
    {
        f = 0;
        cin >> a >> b >> c;
        if ((b - a) == (c - b))
            cout << "YES\n";
        else
        {
            ansa = 2 * b - c;
            ansb = (a + c) / 2;
            ansc = 2 * b - a;
            if (ansa >= 1 && ansa / a >= 1 && ansa % a == 0 && f == 0)
            {
                a *= ansa / a;
                f = 1;
            }
            if (ansb >= 1 && ansb / b >= 1 && ansb % b == 0 && f == 0)
            {
                b *= ansb / b;
                f = 1;
            }
            if (ansc >= 1 && ansc / c >= 1 && ansc % c == 0 && f == 0)
            {
                c *= ansc / c;
                f = 1;
            }
            if (b - a == c - b)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}