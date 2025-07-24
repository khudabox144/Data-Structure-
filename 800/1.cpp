
// #include<bits/stdc++.h>
// using namespace std;

// int n, k, arr[100];

// bool isSorted() {
//     for (int i = 0; i < n - 1; i++) {
//         if (arr[i] > arr[i + 1]) {
//             return false;
//         }
        
//     }
//     return true;
// }

// string solve() {
//     if (isSorted()) {
//         return "YES"; // Already sorted
//     }
//     if (k == 1) {
//         return "NO"; // Can't sort with k=1 if not already sorted
//     }
//     return "YES"; // With k >= 2, it's always possible to sort
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         cin >> n >> k;
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         string ans = solve();
//         cout << ans << '\n';
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while (t--)
  {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }
    int arr2[n];
    copy(arr,arr+n,arr2);

    sort(arr2,arr2+n);
    bool isSort=true;
    for (int i = 0; i < n; i++)
    { 
    
      if(arr2[i]!=arr[i]){
      isSort=false;
      break;
      }
          
    }
    

    

    if(isSort || k>1){
      cout<<"YES"<<"\n";
      
    }
    else cout<<"NO"<<"\n";
  }
  
return 0;}