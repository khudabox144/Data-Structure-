#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll &x : a) cin >> x;
    sort(a.begin(), a.end());


    vector<ll> prefix(n + 1, 0);
    for (ll i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + a[i - 1];
    }

    ll ans = 0;
    for (ll i = 0; i <= k; i++) {
        ll left = 2 * i;
        ll right = n - (k - i);
        
        ans = max(ans, prefix[right] - prefix[left]);
        
    }

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
