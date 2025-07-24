#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> matrix(n, vector<ll>(m));
    ll minus_count = 0;
    ll total_sum = 0;
    ll min_abs = LLONG_MAX;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
            total_sum += abs(matrix[i][j]);
            if (matrix[i][j] < 0) {
                minus_count++;
               
            }
            min_abs = min(min_abs, abs(matrix[i][j])); 
        }
    }

    if (minus_count % 2 == 0) {
        cout << total_sum << endl;
    } else {
        cout << total_sum - 2 * min_abs << endl; 
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
