#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    vector<vector<int>> p(1); 
    p[0].push_back(a[0]);    
    int groups = 0;          

    for (int i = 1; i < n; i++) {
        if (a[i] - a[i-1] > k) {
            p.push_back(vector<int>()); 
            groups++;
        }
        p[groups].push_back(a[i]); 
    }
    
    int max_size = 0;
    for (const auto& group : p) {
        if (group.size() > max_size) {
            max_size = group.size();
        }
    }
    
    cout << n - max_size << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}





// #include<bits/stdc++.h>
// using namespace std;

// void solve() {
//     long long n, k;
//     cin >> n >> k;
//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }
//     sort(a.begin(), a.end());

//     int current_size = 1;
//     int max_size = 1;

//     for (int i = 1; i < n; i++) {
//         if (a[i] - a[i-1] <= k) {
//             current_size++;
//             max_size = max(max_size, current_size);
//         } else {
//             current_size = 1;
//         }
//     }

//     cout << n - max_size << endl;
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }