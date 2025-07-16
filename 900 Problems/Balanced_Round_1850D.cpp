#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    long long int n, k, size, cnt;
    while (t--)
    {
        cnt = 0;
        set<long long int> b;
        cin >> n >> k;
        long long int a[n];
        for (long long int i = 0; i < n; i++)
            cin >> a[i];
        size = sizeof(a) / sizeof(a[0]);
        sort(a, a + size);
        for (long long int i = 0; i < n - 1; i++)
        {
            if (abs(a[i] - a[i + 1]) <= k)
                cnt++;
            else
            {
                b.insert(cnt + 1);
                cnt = 0;
            }
        }
        b.insert(cnt + 1);
        cout << n - *max_element(b.begin(), b.end()) << "\n";
        b.clear();
    }
    return 0;
}