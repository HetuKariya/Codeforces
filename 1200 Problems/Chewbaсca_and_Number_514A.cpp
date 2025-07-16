#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string x;
    int f = 0;
    cin >> x;
    for (int i = 0; i < int(x.length()); i++)
    {
        if (x[0] == '9' && f == 0)
        {
            f = 1;
            if (x[i] == '5')
                x[i] = '4';
            else if (x[i] == '6')
                x[i] = '3';
            else if (x[i] == '7')
                x[i] = '2';
            else if (x[i] == '8')
                x[i] = '1';
            else
                continue;
        }
        else
        {
            if (x[i] == '5')
                x[i] = '4';
            else if (x[i] == '6')
                x[i] = '3';
            else if (x[i] == '7')
                x[i] = '2';
            else if (x[i] == '8')
                x[i] = '1';
            else if (x[i] == '9')
                x[i] = '0';
            else
                continue;
        }
    }
    cout << x;
    return 0;
}