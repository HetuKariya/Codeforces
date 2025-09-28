#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool f = 0;
    int n, size;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    size = sizeof(a) / sizeof(a[0]);
    sort(a, a + size);
    if (a[0] != 1)
        cout << 1;
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] != 1)
            {
                cout << a[i] + 1;
                f = 1;
                break;
            }
        }
        if (f == 0)
            cout << a[n - 1] + 1;
    }
    return 0;
}