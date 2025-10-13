#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long int t, n, k, ans, value1, value2;
    cin >> t;
    while (t--)
    {
        ans = 0;
        cin >> n >> k;
        unordered_map<long long int, long long int> ump;
        for (int i = 0; i < k; i++)
        {
            cin >> value1 >> value2;
            if (ump.find(value1) != ump.end())
                ump[value1] += value2;
            else
                ump[value1] = value2;
        }
        priority_queue<long long int, vector<long long int>, greater<long long int>> pq;
        for (const auto &p : ump)
        {
            pq.push(p.second);
            if ((long long int)pq.size() > n)
                pq.pop();
        }
        while (!pq.empty())
        {
            ans += pq.top();
            pq.pop();
        }
        cout << ans << "\n";
    }
    return 0;
}