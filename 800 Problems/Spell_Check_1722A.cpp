#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n, a;
    cin >> t;
    while (t--)
    {
        a = 0;
        cin >> n;
        string s1 = "Timur", s2;
        cin >> s2;
        if (n != int(s1.length()))
        {
            cout << "NO" << "\n";
            continue;
        }
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        for (int i = 0; i < int(s1.length()); i++)
        {
            if (s1[i] == s2[i])
                a++;
        }
        if (a == int(s1.length()))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}