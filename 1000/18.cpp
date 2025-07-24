#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll w,h;
    cin>>w>>h;
    ll k1,k2,k3,k4;
    
    cin>>k1;
    vector<ll>x1(k1);
    for(auto & x : x1) cin>>x;
    

    cin>>k2;
    vector<ll>x2(k2);
    for(auto & y : x2) cin>>y;


    cin>>k3;
    vector<ll>y1(k3);
    for(auto & z : y1)cin>>z;
    
    
    cin>>k4;
    vector<ll>y2(k4);
    for(auto & w : y2)cin>>w;

    ll dx1=x1[k1-1]-x1[0];
    ll dx2=x2[k2-1]-x2[0];  
    ll mx=max(dx1,dx2);
    ll sq1=mx*h;

    ll dy1=y1[k3-1]-y1[0];
    ll dy2=y2[k4-1]-y2[0];  
    ll mx2=max(dy1,dy2);
    ll sq2=mx2*w;
    
    ll ans =max(sq1,sq2);

    cout<<ans<<endl;
}

int main(){
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}