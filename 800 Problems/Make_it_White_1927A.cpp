#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, index1, index2, cnt;
    cin >> t;
    string s;
    while (t--)
    {
        cnt = 0;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                index1 = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                index2 = i;
                break;
            }
        }
        for (int i = index1; i <= index2; i++)
            cnt++;
        cout << cnt << "\n";
    }
    return 0;
}