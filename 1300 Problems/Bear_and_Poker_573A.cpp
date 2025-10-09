#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, gcd, num;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    gcd = __gcd(a[0], a[1]);
    for (int i = 2; i < n; i++)
        gcd = __gcd(gcd, a[i]);
    for (int i = 0; i < n; i++)
    {
        num = a[i] / gcd;
        while (num % 2 == 0)
            num /= 2;
        while (num % 3 == 0)
            num /= 3;
        if (num != 1)
        {
            cout << "No\n";
            return 0;
        }
    }
    cout << "Yes\n";
    return 0;
}