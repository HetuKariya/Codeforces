#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, max;
    cin >> n;
    int c[n];
    int a = 0, b = 0, current = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cin >> b;
        current -= a;
        current += b;
        c[i] = current;
    }
    max = c[0];
    for (int i = 0; i < n; i++)
    {
        if (c[i] > max)
            max = c[i];
    }
    cout << max;
    return 0;
}