#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, k, count1 = 0, f, g;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int j = 1; j < n; j++)
    {
        k = 0;
        f = 0;
        g = 0;
        while (a[j] > a[k])
        {
            f = 1;
            k++;
        }
        if (f == 1 && k == j)
            count1++;
        k = 0;
        while (a[j] < a[k])
        {
            g = 1;
            k++;
        }
        if (g == 1 && k == j)
            count1++;
    }
    cout << count1;
    return 0;
}