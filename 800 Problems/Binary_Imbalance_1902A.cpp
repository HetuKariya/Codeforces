#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, count;
    cin >> t;
    while (t--)
    {
        count = 0;
        string s;
        cin >> n >> s;
        for (int i = 0; i < int(s.length()); i++)
        {
            if (s[i] == '0')
            {
                count++;
                break;
            }
        }
        if (count == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}