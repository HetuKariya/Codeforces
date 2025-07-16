#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, a1, a2, b1, b2, count;
    cin >> t;
    while (t--)
    {
        count = 0;
        cin >> a1 >> a2 >> b1 >> b2;
        for (int i = 0; i < 2; i++)
        {
            if (i == 0)
            {
                if ((a1 > b1 && a2 >= b2) || (a2 > b2 && a1 >= b1))
                    count += 2;
                else if ((a1 > b1 && a2 >= b2) && (a2 <= b2 && a1 < b1))
                    count++;
                else if ((a1 <= b1 && a2 < b2) && (a2 > b2 && a1 >= b1))
                    count++;
            }
            if (i == 1)
            {
                if ((a1 > b2 && a2 >= b1) || (a2 > b1 && a1 >= b2))
                    count += 2;
                else if ((a1 > b2 && a2 >= b1) && (a2 <= b1 && a1 < b2))
                    count++;
                else if ((a1 <= b2 && a2 < b1) && (a2 > b1 && a1 >= b2))
                    count++;
            }
        }
        cout << count << "\n";
    }
    return 0;
}