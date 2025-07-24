#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
void solve(){
  cin>>n;
  vector<int>a(n);
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }
  int count=0;
  for (int i = 0; i < n-1 ; i++)
  {
    if((a[i]&1)==(a[i+1]&1)){
        count++;
    }
  }

  cout<<count<<endl;
  
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