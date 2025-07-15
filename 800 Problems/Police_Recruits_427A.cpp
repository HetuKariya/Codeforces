#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n;
    cin >> n;
    int a[n], crime = 0, police = 0, count = 0;
    for (long i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == -1)
        {
            crime++;
            if (crime > police)
            {
                count++;
                crime = 0;
                police = 0;
            }
        }
        else
            police += a[i];
    }
    cout << count << "\n";
    return 0;
}