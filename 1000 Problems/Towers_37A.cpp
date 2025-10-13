#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, maximum = 0, cnt = 1, size;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    size = sizeof(a) / sizeof(a[0]);
    sort(a, a + size);
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
            cnt++;
        else
        {
            maximum = max(maximum, cnt);
            cnt = 1;
        }
    }
    maximum = max(maximum, cnt);
    set<int> s(a, a + size);
    cout << maximum << " " << int(s.size());
    return 0;
}