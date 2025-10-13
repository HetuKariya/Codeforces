#include <bits/stdc++.h>
using namespace std;
long long int log_a_to_base_b(long long int a, long long int b)
{
    int ans = 0;
    while (a % b == 0)
    {
        a /= b;
        ans++;
    }
    if (a == 1)
        return ans;
    return -1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int k, l;
    cin >> k >> l;
    if (log_a_to_base_b(l, k) == -1)
        cout << "NO\n";
    else
    {
        cout << "YES\n";
        cout << log_a_to_base_b(l, k) - 1;
    }
    return 0;
}