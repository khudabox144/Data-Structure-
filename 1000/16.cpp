#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,r,b;

void solve(){
    cin>>n>>r>>b;
    string s;
    ll cell=r/(b+1);
    ll ex = r%(b+1);
    for (int i = 0; i < b+1; i++)
    {
        for (int j = 0; j < cell; j++)
        {
            s+='R';
        }
        if(ex>0){
            s+='R';
            ex--;
        }
        if(i!=b){
            s+='B';
        }
        
    }
    
    cout<<s<<endl;
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