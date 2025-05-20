#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    char ch[100], *p, *q;
    int n;
    cin >> n;
    while (n--)
    {
        cin >> ch;
        if (strlen(ch) > 10)
        {
            p = ch;
            q = ch + strlen(ch);
            cout << ch[0] << q - p - 2 << ch[strlen(ch) - 1] << "\n";
        }
        else
            cout << ch << "\n";
    }
    return 0;
}