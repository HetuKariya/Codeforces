#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a = 0, b = 0;
    string s;
    cin >> s;
    if (s[0] == 'h')
    {
        s.insert(4, "://");
        for (int i = 7; i < int(s.length()); i++)
        {
            if (a == 1)
                continue;
            if (s[i] == 'r' && s[i + 1] == 'u' && i != 7)
            {
                a = 1;
                s.insert(i, ".");
                if (i + 3 < int(s.length()))
                {
                    s.insert(i + 3, "/");
                    break;
                }
            }
        }
        cout << s;
    }
    else if (s[0] == 'f')
    {
        s.insert(3, "://");
        for (int i = 6; i < int(s.length()); i++)
        {
            if (b == 1)
                continue;
            if (s[i] == 'r' && s[i + 1] == 'u' && i != 6)
            {
                b = 1;
                s.insert(i, ".");
                if (i + 3 < int(s.length()))
                {
                    s.insert(i + 3, "/");
                    break;
                }
            }
        }
        cout << s;
    }
    return 0;
}