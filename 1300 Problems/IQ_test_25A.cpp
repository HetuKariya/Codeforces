#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, cnt1 = 0, cnt2 = 0, ind1, ind2;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            cnt1++;
            ind1 = i;
        }
        else
        {
            cnt2++;
            ind2 = i;
        }
    }
    if (cnt1 > cnt2)
        cout << ind2 + 1;
    else
        cout << ind1 + 1;
    return 0;
}