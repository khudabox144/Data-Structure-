#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
    }
    
    long long max_freq = 1;  
    long long current_count = 1;
    sort(arr,arr+n);
   if (arr[0] == arr[n-1]) {  
        cout << 0 << endl;
        return;  
    }
    
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i-1]) {
            current_count++;
            max_freq = max(max_freq, current_count);
        } else {
            current_count = 1;
        }
    }
    
   long long operations = 0;
   long long needed = n - max_freq; 

 while (max_freq<n)
 {
    operations++;
    operations+=min(max_freq,needed);
    needed-=max_freq;
    max_freq*=2;
 }
 
    
    cout << operations << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}