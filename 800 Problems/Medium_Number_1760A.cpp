#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    int a[3];
    while (t--)
    {
        for (int i = 0; i < 3; i++)
            cin >> a[i];
        int n = sizeof(a) / sizeof(a[0]);
        sort(a, a + n);
        cout << a[1] << "\n";
    }
    return 0;
}