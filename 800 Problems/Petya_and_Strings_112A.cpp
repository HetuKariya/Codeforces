#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string ch, ch1;
    cin >> ch >> ch1;
    transform(ch.begin(), ch.end(), ch.begin(), ::tolower);
    transform(ch1.begin(), ch1.end(), ch1.begin(), ::tolower);
    if (ch == ch1)
        cout << 0;
    else if (ch > ch1)
        cout << 1;
    else if (ch < ch1)
        cout << -1;
    return 0;
}