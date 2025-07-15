#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    long m;
    cin >> n >> m;
    int i = 1;
    while (m >= i)
    {
        m -= i;
        if (i == n && m > 0)
            i = 1;
        else
            i++;
    }
    cout << m;
    return 0;
}