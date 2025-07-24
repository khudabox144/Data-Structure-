#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while (t--)
  {
    int n,q;
    cin>>n>>q;
    vector<long long>pv;
    pv.push_back(0);
    for (int i = 0; i < n; i++)
    {
      long long p;
      cin>>p;
      pv.push_back(p);
    }
    
    pv.push_back(q);
    long long maxd=LLONG_MIN;
    for (int i = 1; i < pv.size(); i++)
    {
      if(i==pv.size()-1){
        maxd=max(maxd,2*(pv[i]-pv[i-1]));
      }
      else{
        maxd=max(maxd,pv[i]-pv[i-1]);
      }
    }
    cout<<maxd<<endl;
  } 
  return 0;
}