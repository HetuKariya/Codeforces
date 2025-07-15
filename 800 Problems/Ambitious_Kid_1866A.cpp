#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long int n;
    cin >> n;
    long int a[n];
    for (long int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = abs(a[i]);
    }
    long int min = a[0];
    for (long int i = 0; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    cout << min;
    return 0;
}