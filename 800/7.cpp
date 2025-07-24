#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int minOperations(string x, string s) {
    
    if (x.find(s) != string::npos) {
        return 0;
    }


    int operations = 0;
    while (x.size() <= 25) {
        x += x;
        operations++;
        if (x.find(s) != string::npos) {
            return operations;
        }
    }

    return -1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int result = minOperations(x, s);
        cout << result << endl;
    }

    return 0;
}