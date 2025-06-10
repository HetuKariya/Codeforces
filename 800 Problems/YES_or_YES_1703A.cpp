#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if (s == "yes")
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}