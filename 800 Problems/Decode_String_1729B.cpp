#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        string s, result = "";
        cin >> s;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                result = char((((s[i - 2] - '0') * 10) + (s[i - 1] - '1')) + 97) + result;
                i -= 2;
            }
            else
                result = char((s[i] - '1') + 97) + result;
        }
        cout << result << "\n";
    }
    return 0;
}