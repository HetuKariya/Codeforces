#include <iostream>
using namespace std;
int main()
{
    // This will only get accepted in C++ 17
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long long int n, B, x, y, s = 0;
        cin >> n;
        cin >> B;
        cin >> x;
        cin >> y;
        long long int a[n];
        a[0] = 0;
        for (long long int i = 0; i <= n; i++)
        {
            if (a[i] + x <= B)
            {
                a[i + 1] = a[i] + x;
            }
            else
            {
                a[i + 1] = a[i] - y;
            }
            s += a[i];
        }
        cout << s << "\n";
    }
    return 0;
}