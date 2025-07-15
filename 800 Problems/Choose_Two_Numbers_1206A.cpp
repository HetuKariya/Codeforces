#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, size, size1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    size = sizeof(a) / sizeof(a[0]);
    sort(a, a + size);
    size1 = sizeof(b) / sizeof(b[0]);
    sort(b, b + size1);
    cout << a[n - 1] << " " << b[m - 1];
    return 0;
}