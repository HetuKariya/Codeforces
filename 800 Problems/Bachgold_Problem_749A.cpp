#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long n;
    cin >> n;
    if (n == 2)
    {
        cout << 1 << "\n";
        cout << 2;
        exit(0);
    }
    if (n == 3)
    {
        cout << 1 << "\n";
        cout << 3;
        exit(0);
    }
    if (n % 2 == 0)
    {
        cout << (n / 2) << "\n";
        for (int i = 0; i < (n / 2); i++)
            cout << "2 ";
    }
    else
    {
        cout << (n / 2) << "\n";
        for (int i = 0; i < (n / 2) - 1; i++)
            cout << "2 ";
        cout << "3";
    }
    return 0;
}