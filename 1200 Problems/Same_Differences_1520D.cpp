#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int t, n, size, tot, sum, maximum;
    cin >> t;
    while (t--)
    {
        tot = 0;
        sum = 0;
        maximum = 0;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i] - i + 1;
        }
        size = sizeof(b) / sizeof(b[0]);
        sort(b, b + size);
        for (int j = 0; j < n - 1; j++)
        {
            if (b[j] == b[j + 1])
                tot++;
            else
            {
                while (tot > 0)
                {
                    sum += tot;
                    tot--;
                }
                maximum += sum;
                sum = 0;
            }
        }
        while (tot > 0)
        {
            sum += tot;
            tot--;
        }
        maximum += sum;
        cout << maximum << "\n";
    }
    return 0;
}