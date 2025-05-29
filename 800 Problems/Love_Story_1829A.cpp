#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, a;
    cin >> t;
    string s1, s2 = "codeforces";
    while (t--)
    {
        a = 0;
        cin >> s1;
        for (int i = 0; i < int(s1.length()); i++)
        {
            if (s1[i] != s2[i])
                a++;
        }
        cout << a << "\n";
    }
    return 0;
}