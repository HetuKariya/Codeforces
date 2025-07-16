#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, count;
    cin >> t;
    while (t--)
    {
        count = 0;
        string s;
        cin >> s;
        if (int(s.length()) % 2 == 0)
        {
            char a = s[0];
            for (int i = 0; i < int(s.length()); i++)
            {
                if (s[i] == a)
                    count++;
            }
            if (count == int(s.length()))
                cout << "NO\n";
            else
                cout << "YES\n";
        }
        else
        {
            char b = s[0];
            for (int i = 0; i < int(s.length()); i++)
            {
                if (s[i] == b)
                    count++;
            }
            if (count == int(s.length()) - 1 || count == int(s.length()))
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
    return 0;
}