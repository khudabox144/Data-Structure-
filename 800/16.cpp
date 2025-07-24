#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long operations=INT_MAX;
        for (int i = 0; i < n-1; i++)
        {
            if(arr[i]<=arr[i+1]){
                long long  diff=arr[i+1]-arr[i];
                long long req_operations=(diff/2)+1;
                operations=min(req_operations,operations);
            }
            else
            operations=0;
        }
        
        cout<<operations<<endl;
        
    }
    return 0;
}



// #include <bits/stdc++.h>
// #include <numeric>
// using namespace std;
 
// int main(){
 
//     ios::sync_with_stdio(false);
//     cin.tie(0);
 
//     int T; cin >> T;
 
//     while (T--) {
 
//         int n; cin >> n;
//         vector<int> nums(n);
//         int diff = 1e9;
//         bool sorted = true;
//         for (int i = 0; i < n; i++) {
//             cin >> nums[i];
//             if (i > 0) {
//                 diff = min(nums[i] - nums[i - 1], diff);
//                 sorted &= nums[i] >= nums[i - 1];
//             }
//         }
        
//         if (!sorted) {
//             cout << 0 << endl;
//             continue;
//         }
    
//         cout << diff/2 + 1 << endl;
//     }
// }