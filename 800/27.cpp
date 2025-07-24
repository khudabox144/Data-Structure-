#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    int total_twos = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 2) total_twos++;
    }

    int count = 0;
    for (int k = 0; k < n - 1; k++) {
        if (a[k] == 2) count++;
        if (count == total_twos - count) {
            cout << k + 1 << '\n';
            return;
        }
    }

    cout << -1 << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
