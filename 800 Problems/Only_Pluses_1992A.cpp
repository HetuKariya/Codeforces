#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        int j = 1;
        cin >> a >> b >> c;
        while (j <= 5)
        {
            if ((a + 1) * b * c >= a * (b + 1) * c && (a + 1) * b * c >= a * b * (c + 1))
                a++;
            else if (a * (b + 1) * c >= (a + 1) * b * c && a * (b + 1) * c >= a * b * (c + 1))
                b++;
            else
                c++;
            j++;
        }
        cout << a * b * c << "\n";
    }
    return 0;
}