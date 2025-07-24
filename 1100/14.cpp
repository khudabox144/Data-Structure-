#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n), a1(n);

    for (auto &x : a) cin >> x;
    for (auto &y : a1) cin >> y;

    ll left = -1, right = -1;

 
    for (ll i = 0; i < n; i++) {
        if (a[i] != a1[i]) {
            left = i;
            break;
        }
    }

    for (ll j = n - 1; j >= 0; j--) {
        if (a[j] != a1[j]) {
            right = j;
            break;
        }
    }

 
    while (left > 0 && a1[left] >= a[left - 1]) {
        left--;
    }

  
    while (right < n - 1 && a1[right] <= a[right + 1]) {
        right++;
    }

    cout << left + 1 << " " << right + 1 << endl; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
