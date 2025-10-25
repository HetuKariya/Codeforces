#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    int a[n], b[m], res[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int j = 0, k = 0;
    while (j < n || k < m)
    {
        if (k == m || (j < n && a[j] < b[k]))
            j++;
        else
        {
            res[k] = j;
            k++;
        }
    }
    for (int i = 0; i < m; i++)
        cout << res[i] << " ";
    return 0;
}