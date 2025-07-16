#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        if (s[0] == s[n - 1])
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}