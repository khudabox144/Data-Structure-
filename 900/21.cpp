#include<bits/stdc++.h>
using namespace std;
long long n;
string s;

void solve(){
    cin >> s;
    int min_removals = s.size();
    vector<string> targets = {"00", "25", "50", "75"};

    for (const string &t : targets) {
        int pos1 = -1, pos2 = -1;

        for (int i = s.size()-1; i >= 0; --i) {
            if (s[i] == t[1] && pos2 == -1) {
                pos2 = i;
            } else if (s[i] == t[0] && pos2 != -1 && pos1 == -1) {
                pos1 = i;
            }
        }

        if (pos1 != -1 && pos2 != -1) {
            int removals = (s.size()-1 - pos2) + (pos2-1 - pos1);
            min_removals = min(min_removals, removals);
        }
    }

    cout << min_removals << endl;
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}