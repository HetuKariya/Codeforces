#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, i, j, ans;
    cin >> t;
    while(t--)
    {
        ans = 0;
        i = 0; 
        cin >> n;
        j = n - 1; 
        int a[n];
        for (int i = 0; i < n;i++)
            cin >> a[i];
        while (i <= j)
        {
            if (a[i] == a[j] && a[i] == 0)
                i++;
            else if (a[i] == a[j] && a[j] == 1)
                j--;
            else if (a[i] != a[j] && a[i] == 0 && a[j] == 1)
            {
                i++;
                j--; 
            }
            else
            {
                i++;
                j--;
                ans++; 
            } 
        }
        cout << ans << "\n"; 
    } 
    return 0; 
}