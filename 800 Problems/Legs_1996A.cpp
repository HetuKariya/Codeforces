#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, val;
        cin >> n;
        if (n == 2)
        {
            cout << 1 << "\n";
            continue;
        }
        val = n / 4;
        if (n % 4 == 0)
            cout << val << "\n";
        else
        {
            val += 1;
            cout << val << "\n";
        }
    }
    return 0;
}