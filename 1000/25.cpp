#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
void solve(){
    cin>>n;
    map<long long ,long long>m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        m[x]++;
    }

    bool flag=false;
    for(auto it: m){
        if(it.second>=2){
            flag=true;
            break;
        }
    }

    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
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