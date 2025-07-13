#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, a, b, c, d;
    cin >> t;
    while (t--)
    {
        a = 0;
        b = 0;
        string s;
        cin >> s;
        if (s.length() <= 2)
        {
            cout << 0 << "\n";
            continue;
        }
        else
        {
            for (char x : s)
            {
                if (x == '0')
                    a++;
                else
                    b++;
            }
            if (a == b)
            {
                if (s[s.length() - 1] == '0')
                    cout << a - 1 << "\n";
                else
                    cout << b - 1 << "\n";
            }
            else if (a > b)
                cout << b << "\n";
            else
                cout << a << "\n";
        }
    }
    return 0;
}