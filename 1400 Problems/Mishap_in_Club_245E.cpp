#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string input;
    cin >> input;
    int count = 0, countplus = 0, countminus = 0;
    for (int i = 0; i < int(input.length()); i++)
    {
        if (input[i] == '-' && countplus == 0)
        {
            countminus++;
            count++;
        }
        else if (input[i] == '+' && countminus == 0)
        {
            countplus++;
            count++;
        }
        else if (input[i] == '-' && countplus != 0)
        {
            countminus++;
            countplus--;
        }
        else if (input[i] == '+' && countminus != 0)
        {
            countplus++;
            countminus--;
        }
    }
    cout << count;
    return 0;
}