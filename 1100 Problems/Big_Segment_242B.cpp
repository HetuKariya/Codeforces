#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n, maxdifference, index, size;
    cin >> n;
    long a[2 * n];
    for (long i = 0; i < 2 * n; i++)
        cin >> a[i];
    maxdifference = a[1] - a[0];
    index = 1;
    for (long i = 0; i < n; i++)
    {
        if (maxdifference < a[(2 * i) + 1] - a[2 * i])
        {
            maxdifference = a[(2 * i) + 1] - a[2 * i];
            index = i + 1;
        }
    }
    size = sizeof(a) / sizeof(a[0]);
    sort(a, a + size);
    if (maxdifference == a[2 * n - 1] - a[0])
        cout << index;
    else
        cout << -1;
    return 0;
}