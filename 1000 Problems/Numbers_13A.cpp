#include <bits/stdc++.h>
using namespace std;
int sumOfDigit(int n, int b)
{
    if (n == 0)
        return 0;
    return n % b + sumOfDigit(n / b, b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a, x = 0, y, gcd;
    cin >> a;
    y = a - 2;
    for (int i = 2; i < a; i++)
        x += sumOfDigit(a, i);
    gcd = __gcd(x, y);
    x /= gcd;
    y /= gcd;
    cout << x << "/" << y;
    return 0;
}