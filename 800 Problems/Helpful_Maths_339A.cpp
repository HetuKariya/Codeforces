#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    if (s.length() == 1)
        cout << s;
    else
    {
        for (int i = 0; i < int(s.length()); i = i + 2)
        {
            char t;
            for (int j = i; j < int(s.length()); j = j + 2)
            {
                if (s[i] > s[j])
                {
                    t = s[i];
                    s[i] = s[j];
                    s[j] = t;
                }
            }
        }
        cout << s;
    }
    return 0;
}