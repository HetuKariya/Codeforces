#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k, tot, sum = 0, i = 1;
    cin >> n >> k;
    tot = 240 - k;
    sum += 5 * i;
    while (sum < tot && i < n)
    {
        i++;
        sum += 5 * i;
    }
    if (sum > tot || i > n)
        cout << i - 1;
    else
        cout << i;
    return 0;
}