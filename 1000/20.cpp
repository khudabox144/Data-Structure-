#include<bits/stdc++.h>
using namespace std;
#define ll long long
string a,b;
void solve(){
    cin>>a>>b;
    ll n=a.length(),m=b.length();
    ll lcs=0;
    for (ll len = 1; len <= min(n,m); len++)
    {
        for (ll i = 0; i+len <=n; i++)
        {
            for (ll j = 0; j+len <=m; j++)
            {
                string extract_A=a.substr(i,len);
                string extract_B=b.substr(j,len);
                if(extract_A==extract_B){
                    lcs=max(lcs,len);
                }
                
            }
            
        }
        
    }
    
    ll operations = n+m-2*lcs;
    cout<<operations<<endl;
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