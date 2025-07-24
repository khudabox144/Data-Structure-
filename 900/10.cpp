#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;
    int arr[n];
    vector<long long> prefix(n+1, 0);
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        prefix[i+1] = prefix[i] + arr[i];
    }
    
    long long total_sum = prefix[n];
    
    while (q--) {
        int a, b, k;
        cin >> a >> b >> k;
        
        long long sum = prefix[b] - prefix[a-1];
        long long len = b - a + 1;
        
        
        long long new_total = total_sum - sum + len * k;
        
        
        if ((new_total % 2) != (total_sum % 2)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}