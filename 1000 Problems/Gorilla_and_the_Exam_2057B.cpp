#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long t, n, k;
    set<long long> s;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        sort(a, a + n);
        long long b[int(s.size())], j = 0, cnt = 1, ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
                cnt++;
            else
            {
                b[j] = cnt;
                cnt = 1;
                j++;
            }
        }
        b[j] = cnt;
        sort(b, b + int(s.size()));
        for (int i = 0; i < int(s.size()); i++)
        {
            if (k - b[i] >= 0)
            {
                k -= b[i];
                ans++;
            }
        }
        cout << max(int(s.size()) - ans, 1LL) << "\n";
        s.clear();
    }
    return 0;
}