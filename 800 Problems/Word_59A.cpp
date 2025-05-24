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
    for (int i = 0; i < int(s.length()); i++)
    {
        if (s[i] >= 97 && s[i] <= 122)
            a++;
        else
            b++;
    }
    if (a > b)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    }
    else if (a < b)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    }
    return 0;
}