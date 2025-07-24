#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
void solve(){
    cin >> n;
    cin >> s;
    bool status = false;
    long long l = 0, r = 0;
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] > s[i+1]) {
            status = true;
            l = i;
            r = i + 1;
            break; 
        }
    }

    if (status) {
        cout << "YES" << endl;
        cout << l + 1 << " " << r + 1 << endl; 
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    solve();
    return 0;
}