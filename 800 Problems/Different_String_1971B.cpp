#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, index1, index2;
    char c1, c2, temp;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        set<char> s0;
        for (int i = 0; i < int(s.length()); i++)
            s0.insert(s[i]);
        if (s0.size() == 1)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            c1 = *s0.begin();
            c2 = *(++s0.begin());
            index1 = s.find(c1);
            index2 = s.find(c2);
            temp = s[index1];
            s[index1] = s[index2];
            s[index2] = temp;
            cout << s << "\n";
        }
    }
    return 0;
}