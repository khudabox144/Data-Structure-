#include <bits/stdc++.h>
using namespace std;
long long n, k, b, s;
void solve()
{
    cin >> n >> k >> b >> s;
    vector<long long> v(n, 0);
    long long minimum_sum = k * b;
    long long maximum_sum = k * b + n * (k - 1);
    if (s < minimum_sum || maximum_sum < s)
    {
        cout << -1 << endl;
    }
    else
    {
        v[0] = minimum_sum;
        s -= minimum_sum;
        for (int i = 0; i < n; i++)
        {
            long long add = min((k - 1), s);
            v[i] += add;
            s -= add;
        }

        for (auto it : v)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}