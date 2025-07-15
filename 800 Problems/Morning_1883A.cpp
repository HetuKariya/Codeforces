#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long int t, s1;
    string s;
    cin >> t;
    while (t--)
    {
        s1 = 0;
        cin >> s;
        s1 += 4;
        for (int i = 0; i < (int(s.length()) - 1); i++)
        {
            if (i == 0 && abs(int(s[i]) - '0') != 0)
                s1 += abs((int(s[i]) - '0') - 1);
            if (i == 0 && abs(int(s[i]) - '0') == 0)
                s1 += 9;
            if ((int(s[i]) - '0') != 0 && (int(s[i + 1]) - '0') != 0)
                s1 += abs((int(s[i]) - '0') - (int(s[i + 1]) - '0'));
            else if ((int(s[i]) - '0') == 0 && (int(s[i + 1]) - '0') != 0)
                s1 += 10 - int(s[i + 1] - '0');
            if ((int(s[i]) - '0') != 0 && (int(s[i + 1]) - '0') == 0)
                s1 += 10 - int(s[i] - '0');
        }
        cout << s1 << "\n";
    }
    return 0;
}