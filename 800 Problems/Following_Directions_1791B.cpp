#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool f;
    int t, n, x, y;
    cin >> t;
    string s;
    while (t--)
    {
        f = 0;
        x = 0;
        y = 0;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
                y++;
            else if (s[i] == 'D')
                y--;
            else if (s[i] == 'R')
                x++;
            else
                x--;
            if (x == 1 && y == 1)
            {
                cout << "YES\n";
                f = 1;
                break;
            }
        }
        if (f == 0)
            cout << "NO\n";
    }
    return 0;
}