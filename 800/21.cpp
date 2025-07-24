#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    int a[n];
    int m=0, mx=INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]==0){
            m++;
        }
        else{
            mx=max(mx,m);
            m=0;
        }
    }

    cout<<max(m,mx)<<endl;
    
  }
  
return 0;}