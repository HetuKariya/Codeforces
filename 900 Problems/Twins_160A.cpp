#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, t, sumtot = 0, cnt = 0, sumcurr = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sumtot += a[i];
    }
    t = sizeof(a) / sizeof(a[0]);
    sort(a, a + t);
    for (int i = n - 1; i >= 0; i--)
    {
        if (sumcurr <= sumtot)
        {
            sumcurr += a[i];
            sumtot -= a[i];
            cnt++;
        }
        else
            break;
    }
    cout << cnt;
    return 0;
}