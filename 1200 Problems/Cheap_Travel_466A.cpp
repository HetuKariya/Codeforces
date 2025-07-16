#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (n / m == 0)
        cout << min(n * a, b);
    else if (n % m != 0)
    {
        if (min((n % m) * a, b) == b)
            cout << (n / m) * b + b;
        else
            cout << (n / m) * b + (n % m) * a;
    }
    else
        cout << min(n * a, (n / m) * b);
    return 0;
}