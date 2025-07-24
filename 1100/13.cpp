#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
void solve(){
    cin>>n;
    vector<long long>a(n);
    for(auto &x:a)cin>>x;

    long long ans=0;
    for (int i = 0; i < n; i++)
    {
        ans=__gcd(ans,abs(a[i]-a[n-i-1]));
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