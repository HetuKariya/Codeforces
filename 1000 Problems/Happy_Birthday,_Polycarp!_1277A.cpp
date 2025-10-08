#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, num, nn, cnt, totcnt;
    cin >> t;
    while (t--)
    {
        cnt = 0;
        totcnt = 0;
        nn = 0;
        cin >> n;
        if (n <= 9)
            cout << n << "\n";
        else
        {
            num = n;
            while (n > 9)
            {
                cnt++;
                n /= 10;
            }
            totcnt = cnt;
            for (int i = 0; i <= cnt; i++)
            {
                nn += n * pow(10, totcnt);
                totcnt--;
            }
            totcnt++;
            totcnt += n - 1;
            totcnt += 9 * cnt;
            if (num - nn >= 0)
                cout << totcnt + 1 << "\n";
            else
                cout << totcnt << "\n";
        }
    }
    return 0;
}