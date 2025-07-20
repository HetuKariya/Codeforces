#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, size, cnt = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    size = sizeof(a) / sizeof(a[0]);
    sort(a, a + size);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                a[j]++;
                cnt++;
            }
            else
                break;
        }
    }
    cout << cnt;
    return 0;
}