#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n, size;
    cin >> n;
    long long int a[n], l, r, left, right, left1, right1, mid, mid1;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    size = sizeof(a) / sizeof(a[0]);
    sort(a, a + size);
    long k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> l >> r;
        left = -1;
        right = n;
        left1 = -1;
        right1 = n;
        while (right1 > left1 + 1)
        {
            mid1 = (left1 + right1) / 2;
            if (a[mid1] < l)
                left1 = mid1;
            else
                right1 = mid1;
        }
        while (right > left + 1)
        {
            mid = (left + right) / 2;
            if (a[mid] <= r)
                left = mid;
            else
                right = mid;
        }
        cout << left - right1 + 1 << "\n";
    }
    return 0;
}