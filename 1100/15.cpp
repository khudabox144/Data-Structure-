#include<bits/stdc++.h>
using namespace std;

string s;
void solve(){
    cin>>s;
    long long n=s.size();
    long long count=0;
    long long currentCOunt=0;
    long long maxCount=0;
    s+=s;
    for (char x : s)
    {
       if(x=='1'){
        currentCOunt++;
        maxCount=max(currentCOunt,maxCount);
       }
       else{
        currentCOunt=0;
       }
    }
    

    
    if(maxCount>=n)cout<<n*n<<endl;
    else {
        int ans=((maxCount+1)/2) * ((maxCount+2)/2);
        cout<<ans<<endl;
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