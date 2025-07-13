#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int y, w, a = 0, b = 0;
    cin >> y >> w;
    if (y >= w)
    {
        for (int i = y; i <= 6; i++)
            a++;
    }
    else if (w > y)
    {
        for (int i = w; i <= 6; i++)
            b++;
    }
    if (a == 0)
    {
        if (b == 1)
            cout << "1/6";
        else if (b == 2)
            cout << "1/3";
        else if (b == 3)
            cout << "1/2";
        else if (b == 4)
            cout << "2/3";
        else if (b == 5)
            cout << "5/6";
        else if (b == 6)
            cout << "1/1";
        else
            cout << "0/1";
    }
    else
    {
        if (a == 1)
            cout << "1/6";
        else if (a == 2)
            cout << "1/3";
        else if (a == 3)
            cout << "1/2";
        else if (a == 4)
            cout << "2/3";
        else if (a == 5)
            cout << "5/6";
        else if (a == 6)
            cout << "1/1";
        else
            cout << "0/1";
    }
    return 0;
}