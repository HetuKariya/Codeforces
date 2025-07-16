#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, count, count1, count2, count3, ans;
    cin >> t;
    while (t--)
    {
        string s;
        count = 0;
        count1 = 0;
        count2 = 0;
        count3 = 0;
        ans = 0;
        cin >> n >> s;
        for (int i = 0; i < 4 * n; i++)
        {
            if (s[i] == 'A')
                count++;
            else if (s[i] == 'B')
                count1++;
            else if (s[i] == 'C')
                count2++;
            else if (s[i] == 'D')
                count3++;
        }
        if (count >= n)
            ans += n;
        else
            ans += count;
        if (count1 >= n)
            ans += n;
        else
            ans += count1;
        if (count2 >= n)
            ans += n;
        else
            ans += count2;
        if (count3 >= n)
            ans += n;
        else
            ans += count3;
        cout << ans << "\n";
    }
    return 0;
}