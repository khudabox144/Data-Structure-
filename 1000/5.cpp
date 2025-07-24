#include<bits/stdc++.h>
using namespace std;
long long n,k;
string s;
void solve(){
    cin>>n>>k;
    vector<pair<long long,long long>>health_points;
    for (int i = 0; i < n; i++)
    {
        long long x;
        cin>>x;
        health_points.push_back({x,i+1});
    }
    for (int i = 0; i < n; i++)
    {
            health_points[i].first=health_points[i].first%k;
            if(health_points[i].first==0)
            health_points[i].first=k;
    }
    sort(health_points.begin(),health_points.end(), [&] (pair<long long,long long>a,pair<long long,long long>b){
        if(a.first!=b.first)
            return a.first>b.first;
        return a.second<b.second;
    } );

    for(auto it : health_points){
        cout<<it.second<<" ";
    }
    cout<<endl;
    
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