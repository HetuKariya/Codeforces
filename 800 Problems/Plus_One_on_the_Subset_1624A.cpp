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
        int n;
        cin >> n;
        long int a[n], max, min;
        for (long int i = 0; i < n; i++)
            cin >> a[i];
        max = a[0];
        min = a[0];
        for (long int i = 0; i < n; i++)
        {
            if (a[i] > max)
                max = a[i];
            else if (a[i] < min)
                min = a[i];
        }
        cout << max - min << "\n";
    }
    return 0;
}