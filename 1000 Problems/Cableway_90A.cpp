#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(0);
    cout.tie(0);
    int a, b, c, maxans, ans1, ans2, ans3;
    cin >> a >> b >> c;
    ans1 = a / 2 + a % 2;
    ans2 = b / 2 + b % 2;
    ans3 = c / 2 + c % 2;
    maxans = max(max(ans1, ans2), ans3);
    if(maxans == ans3)
        cout << 30 + 3 * (maxans - 1) + 2; 
    else if(maxans == ans2)
        cout << 30 + 3 * (maxans - 1) + 1;
    else
        cout << 30 + 3 * (maxans - 1);  
    return 0; 
}