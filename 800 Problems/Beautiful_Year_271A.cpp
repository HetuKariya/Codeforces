#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a[4];
    string s;
    cin >> s;
    int b = stoi(s), r, i, c = 0;
    b++;
    for (int j = b; j <= 9012; j++)
    {
        c = 0;
        s = to_string(b);
        int temp = b;
        i = 0;
        while (temp > 0)
        {
            r = temp % 10;
            a[i] = r;
            i++;
            temp /= 10;
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = i + 1; j < 4; j++)
            {
                if (a[i] == a[j])
                    c++;
            }
        }
        if (c > 0)
            b++;
        else
        {
            s = to_string(b);
            break;
        }
    }
    cout << s;
    return 0;
}