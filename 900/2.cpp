#include <iostream>
#include <map>
#include <string>
using namespace std;

void solve() {
    long long n, k;
    string s;
    cin >> n >> k >> s;
    
    map<char, int> m;
    for (char c : s) {  
        m[c]++;
    }
    
    long long odd_count = 0;
    for (auto& pair : m) {
        if (pair.second % 2 == 1) odd_count++;
    }

    if (odd_count <= k + 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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