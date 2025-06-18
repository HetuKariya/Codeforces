#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        if (int(s.length()) % 2 != 0)
            cout << "NO\n";
        else
        {
            int len = (int(s.length()) / 2), a = 0;
            for (int i = 0; i < len; i++)
            {
                if (s[i] == s[len + i])
                    a++;
            }
            if (a == len)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}