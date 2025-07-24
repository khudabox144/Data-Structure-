#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    valarray<long long> a(n);
    valarray<long long> b(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
   
    vector<long long>longest_a(2*n+1,0);
    vector<long long>longest_b(2*n+1,0);
    long long count=1;
    for (int i = 1; i < n; i++)
    {
        if(a[i]==a[i-1])count++;
        else{
            longest_a[a[i-1]]=max(count,longest_a[a[i-1]]);
            count=1;
        }
    }
    longest_a[a[n-1]]=max(count,longest_a[a[n-1]]);
    
    count=1;
    for (int i = 1; i < n; i++)
    {
        if(b[i]==b[i-1])count++;
        else{
            longest_b[b[i-1]]=max(count,longest_b[b[i-1]]);
            count=1;
        }
    }
    longest_b[b[n-1]]=max(count,longest_b[b[n-1]]);

    
    
    long long max_freq=-1;
    for(int i=1;i<=n;i++){
        max_freq=max(max_freq,longest_a[i]+longest_b[i]);
    }
    cout<<max_freq<<endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}