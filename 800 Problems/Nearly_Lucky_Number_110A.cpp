#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string n;
    int a = 0;
    cin >> n;
    for (char x : n) 
    {
        if (x == '4' || x == '7')
            a++;
    }
    if (a == 4 || a == 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}