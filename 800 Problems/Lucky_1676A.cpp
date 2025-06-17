#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, a, b;
    cin >> t;
    string s;
    while (t--)
    {
        a = 0;
        b = 0;
        cin >> s;
        for (int j = 0; j < int(s.length()); j++)
        {
            if (j <= 2)
                a += int(s[j] - '0');
            else
                b += int(s[j] - '0');
        }
        if (a == b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}