#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m, n, sum = 0, cnt = 0, size;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    size = sizeof(a) / sizeof(a[0]);
    sort(a, a + size);
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0 && cnt < m)
        {
            sum += a[i];
            cnt++;
        }
    }
    cout << abs(sum);
    return 0;
}