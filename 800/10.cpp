#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<string> grid(10);
        for (int i = 0; i < 10; ++i) {
            cin >> grid[i];
        }
        int total = 0;
        for (int i = 0; i < 10; ++i) {
            for (int j = 0; j < 10; ++j) {
                if (grid[i][j] == 'X') {
                    int ring = min({i + 1, 10 - i, j + 1, 10 - j});
                    total += ring;
                }
            }
        }
        cout << total << endl;
    }
    return 0;
}