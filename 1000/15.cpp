#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n,k;
string s;
void solve(){
    cin>>n>>k;
    cin>>s;

    vector<ll>prefix(n+1,0);
    ll count=0;
    for (ll i = 0; i < n; i++)
    {
        prefix[i+1] = prefix[i] + (s[i] == 'W' ? 1 : 0);
    }

    ll mn=LLONG_MAX;
    for (ll i = 0; i <= n-k; i++)
    {
        ll diff=prefix[i+k]-prefix[i];
        mn=min(mn,diff);
    }
    
    cout<<mn<<endl;
    
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