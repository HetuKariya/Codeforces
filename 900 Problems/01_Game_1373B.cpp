#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, count0, count1;
    cin >> t;
    while (t--)
    {
        count0 = 0;
        count1 = 0;
        string s;
        cin >> s;
        for (int i = 0; i < int(s.length()); i++)
        {
            if (s[i] == '0')
                count0++;
            else
                count1++;
        }
        if (min(count0, count1) % 2 == 0)
            cout << "NET\n";
        else
            cout << "DA\n";
    }
    return 0;
}