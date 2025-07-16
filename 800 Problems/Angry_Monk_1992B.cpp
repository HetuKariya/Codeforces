#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        long long int a[k], size, count;
        count = 0;
        for (long long int i = 0; i < k; i++)
            cin >> a[i];
        size = sizeof(a) / sizeof(a[0]);
        sort(a, a + size);
        for (long long int i = 0; i < k - 1; i++)
        {
            if (a[i] == 1)
            {
                a[i] -= 1;
                count += 1;
            }
            else
            {
                count += (2 * a[i]) - 1;
                a[i] = 0;
            }
        }
        cout << count << "\n";
    }
    return 0;
}