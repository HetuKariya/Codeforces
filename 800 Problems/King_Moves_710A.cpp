#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    if ((s[0] == 'a' && s[1] == '1') || (s[0] == 'a' && s[1] == '8') || (s[0] == 'h' && s[1] == '1') || (s[0] == 'h' && s[1] == '8'))
        cout << 3;
    else if (s[0] == 'a' || s[0] == 'h' || s[1] == '1' || s[1] == '8')
        cout << 5;
    else
        cout << 8;
    return 0;
}