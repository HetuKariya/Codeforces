#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, count;
    string s;
    cin >> t;
    while (t--)
    {
        count = 0;
        cin >> n >> s;
        for (int j = 0; j < int(s.length()) - 1; j++)
        {
            if ((s[j] == 'M' || s[j] == 'm') && (s[j + 1] == 'M' || s[j + 1] == 'm' || s[j + 1] == 'E' || s[j + 1] == 'e'))
                count++;
            else if ((s[j] == 'E' || s[j] == 'e') && (s[j + 1] == 'E' || s[j + 1] == 'e' || s[j + 1] == 'O' || s[j + 1] == 'o'))
                count++;
            else if ((s[j] == 'O' || s[j] == 'o') && (s[j + 1] == 'O' || s[j + 1] == 'o' || s[j + 1] == 'W' || s[j + 1] == 'w'))
                count++;
            else if ((s[j] == 'W' || s[j] == 'w') && (s[j + 1] == 'W' || s[j + 1] == 'w'))
                count++;
        }
        int it = s.find("M");
        int it1 = s.find("m");
        int it2 = s.find("E");
        int it3 = s.find("e");
        int it4 = s.find("O");
        int it5 = s.find("o");
        int it6 = s.find("W");
        int it7 = s.find("w");
        if (count == n - 1 && n != 1 && n != 2 && n != 3 && (it >= 0 || it1 >= 0) && (it2 >= 0 || it3 >= 0) && (it4 >= 0 || it5 >= 0) && (it6 >= 0 || it7 >= 0))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}