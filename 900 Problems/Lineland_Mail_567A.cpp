#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long int n;
    cin >> n;
    long long int minimumcost, maximumcost,maxelement,minelement, size, a[n];
    for (long int i = 0; i < n; i++)
        cin >> a[i];
    size = sizeof(a) / sizeof(a[0]);
    maxelement = *max_element(a, a + size);
    minelement = *min_element(a, a + size);
    for (long int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            minimumcost = a[i + 1] - a[i];
            maximumcost = maxelement - a[i];
            cout << abs(minimumcost) << " " << abs(maximumcost) << "\n";
        }
        else if (i == n - 1)
        {
            minimumcost = a[i] - a[i - 1];
            maximumcost = a[i] - minelement;
            cout << abs(minimumcost) << " " << abs(maximumcost) << "\n";
        }
        else
        {
            minimumcost = min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1]));
            maximumcost = max(maxelement - a[i],a[i] - minelement);
            cout << abs(minimumcost) << " " << abs(maximumcost) << "\n";
        }
    }
    return 0;
}