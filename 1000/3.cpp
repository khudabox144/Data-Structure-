#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, p;
    cin >> n >> p;
    vector<pair<long long, long long>> v(n);
    vector<long long> a(n), b(n);
    
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    for(int i = 0; i < n; i++) {
        v[i] = {min(b[i], p), a[i]}; // Store minimum of b[i] and p
    }
    
    sort(v.begin(), v.end());
    
    long long minimum_cost = p; // At least one group
    long long already_shared = 1; // We've already grouped 1 person
    
    for(auto &it : v) {


        long long elements=it.second;
        long long cost = it.first;

        if(already_shared >= n) break;
        
        long long available = elements;
        long long needed = n - already_shared;
        long long take = min(available, needed);
        
        minimum_cost += take * cost;
        already_shared += take;
    }
    
    cout << minimum_cost << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}