#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    double p, s = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        s += p;
    }
    cout << (s / n);
    return 0;
}