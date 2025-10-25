#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long t, n, ans, val;
    bool f;
    cin >> t;
    while (t--)
    {
        f = 0;
        cin >> n;
        ans = n;
        while (ans > 0)
        {
            val = ans % 10;
            if (val == 0 || (n % val == 0 && val != 0))
                ans /= 10;
            else if (n % val != 0 && val != 0)
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
            cout << n << "\n";
        else
        {
            for (int i = 0; i < 2520; i++) // Because 2520 is the smallest number that is divisible by all numbers from 1 to 9 so we don't need to check more than that.
            {
                f = 0;
                ans = ++n;
                while (ans > 0)
                {
                    val = ans % 10;
                    if (val == 0 || (n % val == 0 && val != 0))
                        ans /= 10;
                    else if (n % val != 0 && val != 0)
                    {
                        f = 1;
                        break;
                    }
                }
                if (f == 0)
                {
                    cout << n << "\n";
                    break;
                }
            }
        }
    }
    return 0;
}