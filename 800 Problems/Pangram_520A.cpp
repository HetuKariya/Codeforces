#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, a = 0;
    string s;
    cin >> n >> s;
    if (n < 26)
        cout << "NO\n";
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        char j = 'a';
        set<char> name(s.begin(), s.end());
        for (int i : name)
        {
            if (i == j)
                a++;
            j -= 'a';
            j++;
            j += 'a';
        }
        if (a == 26)
            cout << "YES" << "\n";
        else
            cout << "NO\n";
    }
    return 0;
}