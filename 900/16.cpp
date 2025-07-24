#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;
    unordered_map<char, int> m;
    
    for(char c : t) {
        m[c]++;
    }

    for(int i = s.size()-1; i >= 0; i--) { 
        if(m[s[i]] > 0) { 
            m[s[i]]--;
        }
        else {
            s[i] = '.';
        }
    }

    vector<char> v;
    for(char c : s) { 
        if(c != '.') {
            v.push_back(c);
        }
    }

    string result(v.begin(), v.end());
    if(result == t) {
        cout << "YES" << endl; 
    }
    else {
        cout << "NO" << endl; 
    }
}

int main() {
    int test_cases;
    cin >> test_cases;
    while(test_cases--) {
        solve();
    }
    return 0;
}