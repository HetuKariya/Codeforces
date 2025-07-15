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
        int a = 0, b = 0, c = 0;
        string s;
        cin >> s;
        for (int i = 0; i < int(s.length()) - 1; i++)
        {
            int r = int(s[i] - '0'), v = int(s[i + 1] - '0');
            c += r + v;
            if (c == 1 && v == 0)
                a++;
            else
            {
                b += a;
                a = 0;
                c = 0;
            }
        }
        cout << b << "\n";
    }
    return 0;
}