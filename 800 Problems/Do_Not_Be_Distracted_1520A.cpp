#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, a, b;
    cin >> t;
    while (t--)
    {
        b = 0;
        string s;
        cin >> n >> s;
        if (n == 1 || n == 2)
        {
            cout << "YES" << "\n";
            continue;
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (s[i] != s[j])
                    {
                        a = s[i];
                        for (int k = j; k < n; k++)
                        {
                            if (s[k] == a)
                            {
                                b = 1;
                                break;
                            }
                        }
                    }
                    if (b == 1)
                        break;
                }
                if (b == 1)
                    break;
            }
            if (b == 1)
            {
                cout << "NO" << "\n";
                continue;
            }
            else
            {
                cout << "YES" << "\n";
                continue;
            }
        }
    }
    return 0;
}