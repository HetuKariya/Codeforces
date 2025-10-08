#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool f = 0;
    int n, cnt = 0, m = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
            cnt++;
        else
        {
            m = max(m, cnt);
            cnt = 0;
        }
        if (f == 0 && i == n - 1)
        {
            i = -1;
            f = 1;
        }
    }
    cout << m << "\n";
    return 0;
}