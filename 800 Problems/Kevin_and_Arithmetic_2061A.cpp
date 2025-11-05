#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, cnteven, cntodd;
    cin >> t;
    while (t--)
    {
        cnteven = 0;
        cntodd = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                cnteven++;
            else
                cntodd++;
        }
        if (cnteven == 0)
            cout << cntodd - 1 << "\n";
        else if (cntodd == 0)
            cout << 1 << "\n";
        else
            cout << cntodd + 1 << "\n";
    }
    return 0;
}