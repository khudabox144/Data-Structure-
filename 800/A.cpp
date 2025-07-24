#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int num = stoi(s);
        int root = sqrt(num);
       
        
        
        if (root * root == num) {
                cout << root << " " << 0 << endl;
        }
        
        else {
            cout << -1 << endl;
        }
    }
    return 0;
}