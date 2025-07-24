


// this is 1 indexing solution
#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    vector<int> a(n * k + 1); // 1-based indexing
    for (int i = 1; i <= n * k; ++i) {
        cin >> a[i];
    }

    long long sum = 0;
    long long i = n * k;
    long long x = (n + 1) / 2; // Correct ceiling using integer arithmetic

    while (k--) {
        i -= (n / 2);
        sum += a[i];
        i -= 1;
    }

    cout << sum << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


// this is 0 based solution
#include<bits/stdc++.h>
using namespace std;
long long n,k;
string s;
void solve(){
    cin>>n>>k;
    int a[n*k+1];
    for (int i = 0; i < n*k; i++)
    {
        cin>>a[i];
    }
    
    long long sum=0;
   
    long long i=n*k;
 
    while (k--)
    {
        i-=(n/2+1);
        sum+=a[i];
    }
    
    cout<<sum<<endl;
    
}
int main(){
int t;
cin >> t;
while (t--)
{
solve();
}
return 0;
}