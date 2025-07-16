#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int k, sum = 0, cnt = 0, size;
    cin >> k;
    int a[12];
    for (int i = 0; i < 12; i++)
        cin >> a[i];
    size = sizeof(a) / sizeof(a[0]);
    sort(a, a + size);
    if (k > 0)
    {
        sum += a[11];
        cnt++;
    }
    for (int i = 10; i >= 0; i--)
    {
        if (a[i] >= k || sum >= k)
            break;
        else
        {
            sum += a[i];
            cnt++;
        }
    }
    if (cnt == 12 && sum < k)
        cout << -1;
    else
        cout << cnt;
    return 0;
}