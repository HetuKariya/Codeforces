#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == 'a' || s[1] == 'b' || s[2] == 'c')
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}