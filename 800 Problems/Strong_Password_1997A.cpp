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
        string s;
        cin >> s;
        if (s.length() == 1)
        {
            char ch = s[0];
            int ascii = ch - '\0';
            if (ascii == 122)
                ascii--;
            else
                ascii++;
            char s1 = (char)ascii;
            s.insert(0, 1, s1);
            cout << s << "\n";
        }
        else
        {
            int ind1 = 0, ind2 = 0;
            for (int i = 1; i < int(s.length()); i++)
            {
                if (s[i] == s[i - 1])
                {
                    ind1 = i - 1;
                    ind2 = i;
                    break;
                }
            }
            if (ind1 == ind2)
            {
                char ch1 = s[0];
                int ascii1 = ch1 - '\0';
                if (ascii1 == 122)
                    ascii1--;
                else
                    ascii1++;
                char s10 = (char)ascii1;
                s.insert(0, 1, s10);
                cout << s << "\n";
            }
            else
            {
                char ch2 = s[ind1];
                int ascii2 = ch2 - '\0';
                if (ascii2 == 122)
                    ascii2--;
                else
                    ascii2++;
                char s2 = (char)ascii2;
                s.insert(ind2, 1, s2);
                cout << s << "\n";
            }
        }
    }
    return 0;
}