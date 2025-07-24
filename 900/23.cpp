#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
void solve(){

    cin>>n;
    int a[n];
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ans=a[0];
    for (int i = 1; i < n; i++)
    {
        ans&=a[i];   
    }
    cout<<ans<<endl;
    
    

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