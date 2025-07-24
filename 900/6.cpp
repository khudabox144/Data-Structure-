#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
void solve(){
    cin>>n;
    long long ans=1;
    while (n%ans==0)
    {
       ans++;
    }

    cout<<ans-1<<endl;
    
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