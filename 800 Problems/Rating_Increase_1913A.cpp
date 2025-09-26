#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    bool b;
    string s;
    cin >> t;
    while (t--)
    {
        b = 0;
        cin >> s;
        if (s[0] == '0')
        {
            cout << -1 << "\n";
            continue;
        }
        if (s[1] == '0')
        {
            for (int j = 1; j < int(s.length()); j++)
            {
                if (s[j] != '0')
                {
                    if (stoi(s.substr(0, j)) < stoi(s.substr(j, int(s.length()) - j)))
                    {
                        cout << s.substr(0, j) << " " << s.substr(j, int(s.length()) - j) << "\n";
                        b = 1;
                        break;
                    }
                    else
                    {
                        cout << -1 << "\n";
                        b = 1;
                        break;
                    }
                }
            }
        }
        if ((s[0] - '0') < (stoi(s.substr(1, int(s.length()) - 1))) && b == 0)
            cout << s[0] << " " << s.substr(1, int(s.length()) - 1) << "\n";
        else if (b == 0)
            cout << -1 << "\n";
    }
    return 0;
}   