#include <bits/stdc++.h>
using namespace std;
bool sortcol(const vector<int> &v1, const vector<int> &v2)
{
    return v1[1] > v2[1];
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, k = 0, sum = 0;
    cin >> n >> m;
    vector<vector<int>> a(m, vector<int>(2, 0));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 2; j++)
            cin >> a[i][j];
    }
    sort(a.begin(), a.end(), sortcol);
    while (n > 0 && k < m)
    {
        if (n >= a[k][0])
        {
            n -= a[k][0];
            sum += a[k][0] * a[k][1];
        }
        else
        {
            sum += n * a[k][1];
            n = 0;
        }
        k++;
    }
    cout << sum << "\n";
    return 0;
}