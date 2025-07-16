#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long int n;
    cin >> n;
    long long int a[n], cnt = 0;
    set<long long int> b;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] <= a[i + 1])
            cnt++;
        else
        {
            b.insert(cnt + 1);
            cnt = 0;
        }
    }
    b.insert(cnt + 1);
    cout << *max_element(b.begin(), b.end());
    return 0;
}