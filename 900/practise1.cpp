#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
void solve(){
   cin>>n;
   unordered_map<int,int>m;
   for (int i = 0; i < n; i++)
   {
    int x;
    cin>>x;
    m[x]++;
   }
   long long count=0;
   for (auto& p : m){
    if (p.second>1)
    {
        count+=p.second/2;
    }
    
   }

   if(count>1) cout<<count<<endl;
   else cout<<1<<endl;
   
    
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