#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n, k, minimum, maximum;
    cin >> n >> k;
    if (k == 0 || k == n)
        minimum = 0;
    else
        minimum = 1;
    if (k <= n / 3LL)
        maximum = k * 2LL;
    else
        maximum = n - k;
    cout << minimum << " " << maximum;
    return 0;
}