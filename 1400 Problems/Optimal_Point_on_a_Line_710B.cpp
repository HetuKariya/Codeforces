#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long int n, size;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    size = sizeof(a) / sizeof(a[0]);
    sort(a, a + size);
    cout << a[(n - 1) / 2];
    return 0;
}