#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
void solve(){
  long long a,b;
  cin>>n>>a>>b;
  if((a==n && a==b) || (a+b)<=(n-2) ) cout<<"YES"<<endl;
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