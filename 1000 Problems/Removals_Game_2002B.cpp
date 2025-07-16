#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, f, g, size;
    cin >> t;
    long int n;
    while (t--)
    {
        f = 0;
        g = 0;
        cin >> n;
        long int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
                f++;
        }
        size = sizeof(a) / sizeof(a[0]);
        reverse(a, a + size);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
                g++;
        }
        if (f == n || g == n)
            cout << "Bob" << "\n";
        else
            cout << "Alice" << "\n";
    }
    return 0;
}