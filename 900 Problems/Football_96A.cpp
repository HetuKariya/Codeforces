#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int cnt0 = 0, cnt1 = 0, f = 0;
    for (int i = 0; i < int(s.length()); i++)
    {
        if (cnt0 == 7 || cnt1 == 7)
        {
            cout << "YES";
            f = 1;
            break;
        }
        else if (s[i] == '0')
        {
            cnt0++;
            cnt1 = 0;
        }
        else if (s[i] == '1')
        {
            cnt1++;
            cnt0 = 0;
        }
    }
    if (f == 0 && cnt0 < 7 && cnt1 < 7)
        cout << "NO";
    else if (f == 0 && (cnt0 >= 7 || cnt1 >= 7))
        cout << "YES";
    return 0;
}