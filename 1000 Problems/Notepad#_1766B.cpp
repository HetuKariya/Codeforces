#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool f;
    int t, n;
    string s;
    cin >> t;
    while (t--)
    {
        f = 0;
        cin >> n;
        cin >> s;
        for (int i = 2; i < n - 1; i++)
        {
            if (s.substr(0, i).find(s.substr(i, 2)) != string::npos)
            {
                f = 1;
                break;
            }
        }
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}