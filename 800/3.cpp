#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while (t--)
 {
  int n;
  cin>>n;
  string s;
  cin>>s;
  bool m=false;
  int count=0;
  for (int i = 0; i < n; i++)
  {
    if(s[i]=='.' && i+1<n && s[i+1]=='.' && i+2<n && s[i+2]=='.' ){
      m=true;
      break;
    }
    if(s[i]=='.'){
      count++;
    }
  }
  if(m){
    count=2;
  }
   cout<<count<<'\n';
 }
 
return 0;}