#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long t;
    cin >> t;
    while (t--)
    {
        int count = 0;
        string s;
        cin >> s;
        for (int i = 0; i < 3; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {
                if (s[i] == s[j])
                    count++;
            }
        }
        if (count == 0 || count == 1 || count == 2)
            cout << 4 << "\n";
        else if (count == 3)
            cout << 6 << "\n";
        else if (count == 6)
            cout << -1 << "\n";
    }
    return 0;
}