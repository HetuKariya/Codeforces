#include <bits/stdc++.h>
using namespace std;
int main()
{
    // only accepted in c++17
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n, k, t;
    cin >> n >> k;
    long long int a[n], b[k];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    t = sizeof(a) / sizeof(a[0]);
    sort(a, a + t);
    for (int i = 0; i < k; i++)
    {
        cin >> b[i];
        long s = 0, e = n;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            if (a[mid] == b[i])
            {
                cout << "\nYES";
                break;
            }
            else if (a[mid] > b[i])
                e = mid - 1;
            else if (a[mid] < b[i])
                s = mid + 1;
        }
        if (s > e)
            cout << "\nNO";
    }
    return 0;
}