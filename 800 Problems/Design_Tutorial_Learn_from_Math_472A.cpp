#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long t, c, f, g;
    cin >> t;
    for (long i = 4; i < t; i++)
    {
        f = 0;
        g = 0;  
        c = t - i;
        for (long i = 2; i < c; i++)
        {
            if (c % i == 0)
            {
                f = 1;
                break;
            }
        }
        for (long j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                g = 1;
                break;
            }
        }
        if (f == 1 && g == 1)
        {
            cout << i << " ";
            cout << c;
            break;
        }
    }
    return 0;
}