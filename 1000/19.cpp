#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long n;
string s;
void solve(){
    cin>>n;
    vector<ll>a(n);
    for(auto&x : a)cin>>x;

    sort(a.begin(),a.end(),greater<ll>());

    vector<ll>right,left;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
            right.push_back(a[i]);
        }
        else if(i%2!=0){
            left.push_back(a[i]);
        }
    }
   
    ll time=0;
    for (int i = 0; i < right.size() ; i++)
    {
       time+=(right[i]*2*(i+1));
    }

    for (int i = 0; i < left.size() ; i++)
    {
       time+=(left[i]*2*(i+1));
    }

    cout<<time<<endl;
    cout<<0<<" ";
    for (int i = left.size(); i > 0 ; i--)
    {
        cout<<-i<<" ";
    }
    
    for (int i = 1; i <= right.size(); i++)
    {
        cout<<i<<" ";
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