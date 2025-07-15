#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int max = a[0];
        for (int i = 0; i < n; i += 2)
        {
            if (max <= a[i])
                max = a[i];
        }
        cout << max << "\n";
    }
    return 0;
}