

#include<bits/stdc++.h>
using namespace std;
void solve(){
  long long n;
  cin>>n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin>>a[i];
  }

  int flag=0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i+1 ; j < n; j++)
    {
        if(__gcd(a[i],a[j])<=2){
            flag=1;
        }
    }
    
  }
  if(flag==0) cout<<"NO"<<endl;
  else cout<<"YES"<<endl;
  
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