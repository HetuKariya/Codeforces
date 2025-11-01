#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool f;
    int t, n, cnt, totcnt;
    string s;
    cin >> t;
    while (t--)
    {
        f = 0;
        cnt = 0;
        totcnt = 0;
        cin >> n >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.' && cnt < 3)
                cnt++;
            if (s[i] == '#' && cnt < 3)
            {
                totcnt += cnt;
                cnt = 0;
            }
            if (cnt == 3)
            {
                f = 1;
                break;
            }
        }
        if (cnt != 0 && cnt != 3)
            totcnt += cnt;
        if (f == 0 || cnt < 3)
            cout << totcnt << "\n";
        else
            cout << 2 << "\n";
    }
    return 0;
}