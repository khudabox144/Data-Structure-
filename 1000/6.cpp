#include<bits/stdc++.h>
using namespace std;
long long n, k, q;
string s;

long long nCr(long long n, long long k) {
    if (k > n) return 0;
    if (k == 0 || k == n) return 1;
    if (k > n - k) k = n - k; // Take advantage of symmetry
    long long res = 1;
    for (long long i = 1; i <= k; ++i) {
        res *= (n - k + i);
        res /= i;
    }
    return res;
}

void solve() {
    cin >> n >> k >> q;
    vector<long long> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
   
    long long number_ways=0;
    long long len=0;
    for (int i = 0; i < n; i++)
    {
        if(v[i]<=q)len++;
        else{
            if(len>=k){
                long long x=len-k+1;
                number_ways+=x*(x+1)/2;
            }
            len=0;
        }
    }

     if(len>=k){
                long long x=len-k+1;
                number_ways+=x*(x+1)/2;
    }
    

    cout << number_ways<<endl;
    
   
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}