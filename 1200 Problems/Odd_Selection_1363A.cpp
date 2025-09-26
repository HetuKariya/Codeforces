#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, x, cntodd, cnteven, even_count;
    bool possible;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        cntodd = 0;
        cnteven = 0;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 != 0)
                cntodd++;
            else
                cnteven++;
        }
        possible = false;
        for (int odd_count = 1; odd_count <= cntodd; odd_count += 2)
        {
            even_count = x - odd_count;
            if (even_count >= 0 && even_count <= cnteven)
            {
                possible = true;
                break;
            }
        }
        if (possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}