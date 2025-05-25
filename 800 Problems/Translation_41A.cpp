#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s, t;
    cin >> s >> t;
    if (int(s.length()) != int(t.length()))
        cout << "NO";
    else
    {
        int a = 0;
        for (int i = 0; i < int(s.length()); i++)
        {
            if (s[i] == t[s.length() - i - 1])
                a++;
        }
        if (a == int(s.length()))
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}