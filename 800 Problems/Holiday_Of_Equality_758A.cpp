#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    long a[n], max, S = 0;
    for (long i = 0; i < n; i++)
        cin >> a[i];
    max = a[0];
    for (long i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    for (long i = 0; i < n; i++)
        S += max - a[i];
    cout << S;
    return 0;
}