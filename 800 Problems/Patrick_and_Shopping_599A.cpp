#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long int d1, d2, d3, ans;
    cin >> d1 >> d2 >> d3;
    ans = min(((2 * d2) + (2 * d3)), min(((2 * d1) + (2 * d3)), min((d1 + d2 + d3), ((2 * d1) + (2 * d2)))));
    cout << ans;
    return 0;
}