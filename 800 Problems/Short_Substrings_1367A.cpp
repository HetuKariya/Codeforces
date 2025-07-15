#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        vector<string> s1;
        for (int i = 0; i < int(s.length()) - 1; i = i + 2)
            s1.push_back(s.substr(i, 2));
        int j = 0;
        for (string x : s1)
        {
            if (j == 0)
                cout << x;
            else
                cout << x[1];
            j++;
        }
        cout << endl;
    }
    return 0;
}