#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, b = 0;
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 'W' || a[i][j] == 'G' || a[i][j] == 'B')
                b++;
        }
    }
    if (b == (n * m))
        cout << "#Black&White";
    else
        cout << "#Color";
    return 0;
}