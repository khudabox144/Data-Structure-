#include<bits/stdc++.h>
using namespace std;
long long n,x;

void solve(){
    cin>>n>>x;
    vector<long long>v(n);
    for(auto &x:v)cin>>x;

    long long low=0,high=LLONG_MAX,ans=0;
   while (low<=high)
   {
      long long mid=(low+high)/2;
      long long total_units=0;
      for (long long i = 0; i < n; i++)
      {
        total_units+=max(0LL,mid-v[i]);
      }
       if(total_units<=x){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
      
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