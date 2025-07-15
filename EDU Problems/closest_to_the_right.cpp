#include <iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n, k, left, right, mid;
    cin >> n >> k;
    long long int a[n], b[k];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < k; i++)
    {
        left = -1;
        right = n;
        cin >> b[i];
        while (right > left + 1)
        {
            mid = (left + right) / 2;
            if (a[mid] < b[i])
                left = mid;
            else
                right = mid;
        }
        if (right == n)
            cout << n + 1 << "\n";
        else
            cout << right + 1 << "\n";
    }
    return 0;
}