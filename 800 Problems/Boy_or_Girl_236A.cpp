#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    set<char> my_name(s.begin(), s.end());
    if (my_name.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}