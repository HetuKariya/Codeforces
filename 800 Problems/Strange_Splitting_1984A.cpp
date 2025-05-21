#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, t, b;
    cin >> t;
    while (t--)
    {
        b = 0;
        cin >> n;
        long int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
                b++;
        }
        if (b == n - 1)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
            {
                if (n % 2 == 0 && i == (n / 2))
                    cout << "B";
                else if (n % 2 == 0 && i != (n / 2))
                    cout << "R";
                else if (n % 2 != 0 && i == (n / 2))
                    cout << "B";
                else if (n % 2 != 0 && i != (n / 2))
                    cout << "R";
            }
            cout << "\n";
        }
    }
    return 0;
}