#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    long long n;
    cin>>n;
    vector<long long>v(n);
    for(ll &x : v)cin>>x;
    
    ll ans=v[0];
    ll cur=v[0];

    for (ll i = 1; i < n;i++ )
    {
        if(abs(v[i]%2) != abs(v[i-1]%2) ){
             cur=max(v[i],cur+v[i]);
        }
        else{
           cur=v[i];
        }
        ans=max(cur,ans);
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