#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
void solve(){
    cin>>n;
    vector<long long>v(n);
    for(auto &x : v)cin>>x;

    sort(v.rbegin(),v.rend());
    for(auto it : v)cout<<it<<" ";
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