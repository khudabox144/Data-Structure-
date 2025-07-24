#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    int total_count = 0;
    
    for (long long k = 1; k <= n; k *= 10) {
        for (int d = 1; d <= 9; ++d) {
            if (d * k <= n) {
                total_count++;
            }
        }
    }
    
    cout << total_count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}