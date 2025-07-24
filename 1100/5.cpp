#include<bits/stdc++.h>
using namespace std;
#define ll long long 
long long n;

void solve(){
    cin>>n;
    vector<ll>v(n);
    for(auto & x : v)cin>>x;
    
    vector<ll>prefix(n);

    prefix[0]=v[0];

    for (ll i = 1; i < n; i++)
    {
        prefix[i]=(v[i]+prefix[i-1]);
    }
    
    ll ans=LLONG_MIN;
    for (ll k = 1; k <=n; k++)
    {
        if(n%k)continue;
        ll start=k-1;
        
        ll mx=prefix[start];
        ll mn=prefix[start];
        for (ll i = start+k ; i < n ; i+=k)
        {
            ll curr=(prefix[i]-prefix[i-k]);
            mx=max(curr,mx);
            mn=min(curr,mn);
        }
        ans=max(ans,(mx-mn));
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