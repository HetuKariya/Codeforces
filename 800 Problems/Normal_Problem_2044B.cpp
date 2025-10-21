#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        for (int i = int(s.length()) - 1; i >= 0; i--)
        {
            if (s[i] == 'p')
                cout << "q";
            else if (s[i] == 'q')
                cout << "p";
            else
                cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}