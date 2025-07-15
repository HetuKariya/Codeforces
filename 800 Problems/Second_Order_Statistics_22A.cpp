#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, f = 0, b = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n == 1)
    {
        cout << "NO";
        exit(0);
    }
    int t = sizeof(a) / sizeof(a[0]);
    sort(a, a + t);
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[0])
        {
            b = i;
            f++;
            break;
        }
    }
    if (f == 1)
        cout << a[b];
    else
        cout << "NO";
    return 0;
}