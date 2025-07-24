// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int t;
//   cin>>t;
//   while (t--)
//   {
//     int n;
//     cin>>n;
//     int arr[n+1];
//     for (int i = 1; i <= n; i++)
//     {
//       cin>>arr[i];
//     }

//     if(arr[1]==1){
//       cout<<"YES"<<'\n';
//     }
//     else
//     cout<<"NO"<<'\n';
    

//   }
  
// return 0;}


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_sorted(const vector<int>& a) {
    for (int i = 1; i < a.size(); ++i) {
        if (a[i-1] > a[i]) return false;
    }
    return true;
}

bool can_sort(vector<int> a) {
    int n = a.size();
    while (!is_sorted(a)) {
        bool operation_performed = false;
        for (int i = 1; i < n - 1; ++i) {
            if (a[i-1] < a[i] && a[i] > a[i+1]) {
                swap(a[i], a[i+1]);
                operation_performed = true;
            }
        }
        if (!operation_performed) break;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        if (can_sort(a)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}