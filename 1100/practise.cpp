#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long n;
string s;
void solve(){
    cin>>n;
    vector<ll>v(n);

    for(auto & x : v)cin>>x;

    ll maxSum=v[0],currentSum=v[0];
    ll start=0,tempStart=0, end=0;
    for (ll i = 1; i < n; i++)
    {
        if(currentSum<0){
            currentSum=v[i];
            start=i;
        }
        else{
            currentSum+=v[i];
        }
        if(currentSum>maxSum){
            maxSum=currentSum;
            
            end=i;
        }
    }
    
    cout<<maxSum<<endl;
    cout<<start<<" end "<<end<<endl;
    
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