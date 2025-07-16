#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, f;
    long long int n, cnt;
    cin >> t;
    while (t--)
    {
        f = 0;
        cnt = 0;
        cin >> n;
        if (n == 1)
            cout << 0 << "\n";
        else
        {
            while (n % 3 == 0 || n % 6 == 0 || n != 1)
            {
                if (n % 6 == 0)
                {
                    n /= 6;
                    cnt++;
                }
                else if (n % 3 == 0)
                {
                    n *= 2;
                    cnt++;
                }
                else
                {
                    f = 1;
                    break;
                }
            }
            if (f == 1)
                cout << -1 << "\n";
            else
                cout << cnt << "\n";
        }
    }
    return 0;
}