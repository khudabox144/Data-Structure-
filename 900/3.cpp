#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
void solve(){
    long long x,k;
    cin>>n>>k>>x;
    long long min=k * (k + 1) / 2;
    long long max= k * (2 * n - k + 1) / 2;
    
     if(min<=x &&  x<=max) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    
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