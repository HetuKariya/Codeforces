#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long int n;
    int a = 0, b = 0;
    string s;
    cin >> n >> s;
    for (char x : s)
    {
        if (x == 'A')
            a++;
        else
            b++;
    }
    if (a > b)
        cout << "Anton";
    else if (a < b)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}