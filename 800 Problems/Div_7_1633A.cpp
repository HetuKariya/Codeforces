#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, a, b;
    cin >> t;
    while (t--)
    {
        a = 0;
        b = 0;
        cin >> n;
        if (n <= 14)
            cout << 14 << "\n";
        else if (n % 7 == 0)
            cout << n << "\n";
        else if (n >= 995 && n <= 999)
            cout << 994 << "\n";
        else
        {
            a = (n / 10) * 10;
            for (int i = a + 1; i < a + 10; i++)
            {
                if (i % 7 == 0)
                {
                    cout << i << "\n";
                    break;
                }
            }
        }
    }
    return 0;
}