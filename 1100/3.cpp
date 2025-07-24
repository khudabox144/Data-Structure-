#include<bits/stdc++.h>
using namespace std;
#define int long long 
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second=i;
    }
    sort(v.begin(),v.end());
   
    

    int j=1;
    int sum=v[0].first;
    vector<int>ans(n);
    for(int i=0;i<n;i++){
        if(i==j){
            sum+=v[j].first;
            j++;
        }
        while(j<n&&sum>=v[j].first){
            sum+=v[j].first;
            j++;
        }
        ans[v[i].second]=j-1;
    }
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";cout<<endl;
}
int32_t main(){
    int t;
    cin>>t;
    while(t--)solve();
}