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
        if (s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u' || s[i] == 'Y' || s[i] == 'y')
            continue;
        else
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] += 32;
                cout << "." << s[i];
            }
            else
                cout << "." << s[i];
        }
    }
    return 0;
}