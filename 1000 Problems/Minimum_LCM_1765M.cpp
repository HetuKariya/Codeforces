#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int t, n, ans;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 2 == 0)
            cout << n / 2 << " " << n / 2 << "\n";
        else if (isPrime(n))
            cout << 1 << " " << n - 1 << "\n";
        else
        {
            for (int i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    ans = n / i;
                    break;
                }
            }
            cout << ans << " " << n - ans << "\n";
        }
    }
    return 0;
}