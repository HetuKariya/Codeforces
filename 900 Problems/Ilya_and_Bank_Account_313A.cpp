#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n, val1, val2;
    cin >> n;
    if (n >= 0)
        cout << n;
    else
    {
        val1 = n / 10;
        val2 = n % 10;
        n /= 100;
        n *= 10;
        n += val2;
        if (val1 > n)
            cout << val1;
        else
            cout << n;
    }
    return 0;
}