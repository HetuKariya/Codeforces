#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k, f, t;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> f >> t;
        if (t > k)
        {
            f -= t - k;
            a[i] = f;
        }
        else
            a[i] = f;
    }
    int size = sizeof(a) / sizeof(a[0]);
    cout << *max_element(a, a + size);
    return 0;
}