#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, k, cnt;
    cin >> t;
    while (t--)
    {
        cnt = 0;
        cin >> n >> k;
        if (n < k || k == 1)
            cout << n << "\n";
        else if (n == k)
            cout << 1 << "\n";
        else
        {
            while (n > 0)
            {
                cnt += n % k;
                n /= k;
            }
            cout << cnt << "\n";
        }
    }
    return 0;
}