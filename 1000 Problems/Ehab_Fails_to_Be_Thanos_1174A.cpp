#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, size, s1 = 0, s2 = 0;
    cin >> n;
    int a[2 * n];
    for (int i = 0; i < 2 * n; i++)
        cin >> a[i];
    size = sizeof(a) / sizeof(a[0]);
    sort(a, a + size);
    for (int i = 0; i < 2 * n; i++)
    {
        if (i < n)
            s1 += a[i];
        else
            s2 += a[i];
    }
    if (s1 != s2)
    {
        for (int i = 0; i < 2 * n; i++)
            cout << a[i] << " ";
    }
    else
        cout << -1;
    return 0;
}