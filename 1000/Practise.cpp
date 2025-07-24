#include<bits/stdc++.h>
using namespace std;
long long n,j,k;

void solve(){
 cin>>n>>j>>k;
 vector<long long>a(n);
 for(int i=0;i<n;i++){cin>>a[i];}
  long long j_number =a[j-1];
  long long count=0;
  for (int i = 0; i < n; i++)
  {
      if(a[i]>j_number)count++;
  }
  
  if(count>=1 && k==1){
    cout<<"No"<<endl;
  }
  else{
    cout<<"Yes"
  }
  
 
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