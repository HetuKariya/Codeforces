#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, size, i = 0;
    vector<int> b;
    cin >> n >> m;
    int a[m];
    for (int i = 0; i < m; i++)
        cin >> a[i];
    size = sizeof(a) / sizeof(a[0]);
    sort(a, a + size);
    n--;
    m--;
    while (n <= m)
    {
        b.push_back(a[n] - a[i]);
        i++;
        n++;
    }
    cout << *min_element(b.begin(), b.end());
    return 0;
}