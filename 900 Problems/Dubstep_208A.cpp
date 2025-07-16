#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int f = 0;
    for (int i = 0; i < int(s.length()); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            s.erase(i, 2);
            if (i != 0 && f == 0)
            {
                f = 1;
                cout << " ";
            }
        }
        else
        {
            f = 0;
            cout << s[i];
        }
    }
    return 0;
}