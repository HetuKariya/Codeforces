#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, j;
    string s;
    cin >> n >> s;
    if (n % 2 == 0)
    {
        j = 2;
        for (int i = 0; i < int(s.length()); i++)
        {
            if (i == 2 && j == 2)
            {
                cout << "-";
                cout << s[i];
            }
            else if (i == j + 2)
            {
                cout << "-";
                cout << s[i];
                j += 2;
            }
            else
                cout << s[i];
        }
    }
    else
    {
        j = 3;
        for (int i = 0; i < int(s.length()); i++)
        {
            if (i == 3 && j == 3)
            {
                cout << "-";
                cout << s[i];
            }
            else if (i == j + 2)
            {
                cout << "-";
                cout << s[i];
                j += 2;
            }
            else
                cout << s[i];
        }
    }
    return 0;
}