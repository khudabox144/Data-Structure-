


#include <bits/stdc++.h>
using namespace std;
long long n;
void solve() {
    cin>>n;
    if(n<10) cout<<n<<'\n';
    else if(n<100) cout<<n/10+9<<'\n';
    else if(n<1000) cout<<18+n/100<<'\n';
    else if(n<10000) cout<<27+n/1000<<'\n';
    else if(n<100000) cout<<36+n/10000<<'\n';
    else if(n<1000000) cout<<45+n/100000<<'\n';
    return;
    
    // jingly code 
    // int ans=0;
    // while (n)
    // {
    //     ans+=min(9,n);
    //     n/10;
    // }
    

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}