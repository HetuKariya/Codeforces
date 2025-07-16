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
        if (s[i] == 'h' && f == 0)
            f = 1;
        else if (s[i] == 'e' && f == 1)
            f = 2;
        else if (s[i] == 'l' && f == 2)
            f = 3;
        else if (s[i] == 'l' && f == 3)
            f = 4;
        else if (s[i] == 'o' && f == 4)
            f = 5;
    }
    if (f == 5)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}