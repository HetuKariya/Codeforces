#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    for (int i = 0; i < int(s.length()); i++)
    {
        if (s[i] == '.')
            cout << 0;
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            cout << 1;
            i++;
        }
        else
        {
            cout << 2;
            i++;
        }
    }
    return 0;
}