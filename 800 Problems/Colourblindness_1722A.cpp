#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, a, b, c;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        a = 0;
        b = 0;
        c = 0;
        cin >> n >> s1 >> s2;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] == 'R')
                a++;
            if (s2[i] == 'R')
                b++;
            if (s1[i] == 'R' && s2[i] == 'R')
                c++;
        }
        if (a == b && b == c)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}