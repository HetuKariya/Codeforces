#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, rating;
    cin >> t;
    while (t--)
    {
        cin >> rating;
        if (rating <= 1399)
            cout << "Division 4\n";
        else if (rating >= 1400 && rating <= 1599)
            cout << "Division 3\n";
        else if (rating >= 1600 && rating <= 1899)
            cout << "Division 2\n";
        else
            cout << "Division 1\n";
    }
    return 0;
}