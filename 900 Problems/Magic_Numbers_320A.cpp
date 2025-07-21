#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int cnt1 = 0, cnt4 = 0;
    bool val1 = false, val2 = false, val3 = false;
    string s;
    cin >> s;
    for (int i = 0; i < int(s.length()); i++)
    {
        if (s[i] != '1' && s[i] != '4')
        {
            cout << "NO\n";
            val1 = true;
            break;
        }
        if (s[i] == '4' && cnt1 > 0)
            cnt4++;
        if (cnt4 > 2)
        {
            cout << "NO\n";
            val3 = true;
            break;
        }
        if (s[i] == '4' && cnt1 == 0)
        {
            cout << "NO\n";
            val2 = true;
            break;
        }
        if (s[i] == '1')
        {
            cnt1++;
            cnt4 = 0;
        }
    }
    if (val1 == false && val2 == false && val3 == false)
        cout << "YES\n";
    return 0;
}