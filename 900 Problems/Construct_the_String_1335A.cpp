#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        while (n > 0)
        {
            for (char i = 'a'; i < b + 'a'; i++)
            {
                cout << i;
                n--;
                if (n == 0)
                    break;
            }
        }
        cout << "\n";
    }
    return 0;
}