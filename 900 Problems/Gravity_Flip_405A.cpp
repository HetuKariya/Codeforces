#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, t;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    t = sizeof(a) / sizeof(a[0]);
    sort(a, a + t);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}