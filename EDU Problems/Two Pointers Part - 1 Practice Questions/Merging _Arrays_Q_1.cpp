#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, j = 0, k = 0, l = 0;
    cin >> n >> m;
    int a[n], b[m], c[n + m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    while (j < n || k < m)
    {
        if ((j < n && a[j] < b[k]) || k == m)
        {
            c[l] = a[j];
            j++;
            l++;
        }
        else
        {
            c[l] = b[k];
            k++;
            l++;
        }
    }
    for (int i = 0; i < n + m; i++)
        cout << c[i] << " ";
    return 0;
}