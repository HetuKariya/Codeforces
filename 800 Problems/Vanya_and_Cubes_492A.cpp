#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, a = 1, b = 0;
    cin >> n;
    int j = 2;
    while (n >= a)
    {
        for (int i = 1; i <= j; i++)
            a += i;
        b++;
        j++;
    }
    cout << b;
    return 0;
}