#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    long long n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if ((n % 4 != 0 && n % 6 != 0 && n % 4 != 2 && n % 6 != 2 && n % 6 != 4) || (n == 2))
            cout << -1 << "\n";
        else
        {
            long long a = n / 6, b = n / 4;
            if (n % 6 != 0)
                cout << a + 1 << " " << b << "\n";
            else
                cout << a << " " << b << "\n";
        }
    }
    return 0;
}