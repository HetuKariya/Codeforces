#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, a, b;
    cin >> n >> a >> b;
    if (b == 0)
        cout << a;
    else if (b > 0)
    {
        while (b > 0)
        {
            if (a == n)
            {
                a = 1;
                b--;
            }
            else
            {
                a++;
                b--;
            }
        }
        cout << a;
    }
    else
    {
        b = abs(b);
        while (b > 0)
        {
            if (a == 1)
            {
                a = n;
                b--;
            }
            else
            {
                a--;
                b--;
            }
        }
        cout << a;
    }
    return 0;
}