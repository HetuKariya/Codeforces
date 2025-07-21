#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, j, k;
    cin >> t;
    while (t--)
    {
        cin >> n;
        j = n;
        k = n - 1;
        if (n == 1)
            cout << 1 << "\n";
        else if ((((n * (n + 1))) / 2) % n == 0)
            cout << -1 << "\n";
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    cout << k << " ";
                    k -= 2;
                }
                else
                {
                    cout << j << " ";
                    j -= 2;
                }
            }
            cout << "\n";
        }
    }
    return 0;
}