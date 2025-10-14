#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int n, cnt = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cnt += i;
        if (cnt >= n)
        {
            cnt -= i;
            break;
        }
    }
    cout << n - cnt;
    return 0;
}