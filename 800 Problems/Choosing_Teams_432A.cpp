#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k, b = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] += k;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 5)
            b++;
    }
    cout << b / 3;
    return 0;
}