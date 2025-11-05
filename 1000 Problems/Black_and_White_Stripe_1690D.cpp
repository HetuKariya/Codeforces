#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, k, mw, w, i;
    string s;
    cin >> t;
    while (t--)
    {
        mw = INT_MAX;
        w = 0;
        cin >> n >> k;
        cin >> s;
        i = 0;
        for (int j = 0; j < k; j++)
        {
            if (s[j] == 'W')
                w++;
        }
        mw = min(mw, w);
        for (int j = k; j < n; j++)
        {
            if (s[i] == 'W')
                w--;
            if (s[j] == 'W')
                w++;
            i++;
            mw = min(mw, w);
        }
        cout << mw << "\n";
    }
    return 0;
}