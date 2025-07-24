#include<bits/stdc++.h>
using namespace std;
#define ll long long 
long long n;

string s;
void solve(){
    cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);
    for(auto&x:a)cin>>x;
    for(auto&y:b)cin>>y;

    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());

    ll mod=1e9+7;
    ll result=1;
    for (ll i = 0; i < n; i++)
    {
        ll temp=upper_bound(a.begin(),a.end(),b[i])-a.begin();
        ll count = a.size()-temp;

        result=result*(max(count-i,0LL))%mod;
    }
    cout<<result<<endl;
    
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