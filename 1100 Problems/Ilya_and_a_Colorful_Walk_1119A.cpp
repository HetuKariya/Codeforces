#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m = 0;
    cin >> n;
    int c[n];
    for (int i = 0; i < n; i++)
        cin >> c[i];
    for (int i = 0; i < n; i++)
    {
        if (c[i] == c[n - 1])
            continue;
        else
        {
            m = max(m, n - 1 - i);
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (c[i] == c[0])
            continue;
        else
        {
            m = max(m, i);
            break;
        }
    }
    cout << m << endl;
    return 0;
}