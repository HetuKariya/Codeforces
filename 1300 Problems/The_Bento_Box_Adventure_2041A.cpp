#include <bits/stdc++.h>
using namespace std;
bool BinarySearch(int a[], int val);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int a[4], b[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    sort(a, a + 4);
    for (int i = 0; i < 5; i++)
    {
        if (!BinarySearch(a, b[i]))
        {
            cout << b[i] << " ";
            break;
        }
    }
    return 0;
}
bool BinarySearch(int a[], int val)
{
    long s = 0, e = 4;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == val)
            return true;
        else if (a[mid] > val)
            e = mid - 1;
        else if (a[mid] < val)
            s = mid + 1;
    }
    return false;
}