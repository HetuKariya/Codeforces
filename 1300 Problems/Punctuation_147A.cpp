#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int count;
    string s;
    getline(cin, s, '\n');
    int n = int(s.length());
    for (int i = 0; i < int(s.length()) - 1; i++)
    {
        count = 0;
        if (s[i] == ' ' && s[i + 1] == ' ')
        {
            int j = i;
            while (s[i] == ' ' && s[i + 1] == ' ' && i < n - 1)
            {
                count++;
                i++;
            }
            i = j;
            s.erase(i, count);
        }
        if (((s[i] == ' ' && s[i + 1] == ',') || (s[i] == ' ' && s[i + 1] == '!') || (s[i] == ' ' && s[i + 1] == '?') || (s[i] == ' ' && s[i + 1] == '.')) && i < n - 1)
            s.erase(i, 1);
        if (s[i] == ',' || s[i] == '?' || s[i] == '!' || s[i] == '.')
            s.insert(i + 1, " ");
    }
    cout << s;
    return 0;
}