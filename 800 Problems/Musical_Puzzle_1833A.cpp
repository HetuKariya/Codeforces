#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long int t;
    cin >> t;
    string s;
    while (t--)
    {
        int n, a = 0;
        cin >> n >> s;
        set<string> s1;
        for (int i = 0; i < int(s.length()) - 1; i++)
            s1.insert(s.substr(i, 2));
        for (string x : s1)
            a++;
        cout << a << "\n";
    }
    return 0;
}