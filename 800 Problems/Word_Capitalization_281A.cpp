#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    if (s[0] >= 97 && s[0] <= 122)
    {
        s[0] = s[0] - 32;
        cout << s;
    }
    else
        cout << s;
    return 0;
}