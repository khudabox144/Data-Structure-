#include<bits/stdc++.h>
using namespace std;


void solve(){
long long n,k;
    cin>>n>>k;

      vector <long long> a(n), b(n);
    for (long long &x: a) cin >> x;
    for (long long &y: b) cin >> y;
    
    
    long long mx_in_b=0,sum=0,ans=0;
    for (long long  i = 0; i < min(n,k); i++)
    {
        sum+=a[i];
        mx_in_b=max(mx_in_b,b[i]);
        ans=max(ans,sum+(k-i-1)*mx_in_b);
    }
    cout<<ans<<endl;

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