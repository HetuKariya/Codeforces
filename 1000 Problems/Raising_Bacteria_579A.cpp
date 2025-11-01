#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long x, val, ans = 0;
    cin >> x;
    if ((x & (x - 1)) == 0)
        cout << 1;
    else
    {
        while (x > 0)
        {
            val = log2(x);
            x -= (1 << val);
            ans++;
        }
        cout << ans;
    }
    return 0;
}