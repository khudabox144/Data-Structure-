#include<bits/stdc++.h>
using namespace std;
long long n,x;
string s;
void solve(){
    cin>>x>>n;
    long long ans=1;
    // while (ans<=n)
    // {
    //     if(x%2==0){
    //         x-=ans;
    //     }
    //     else{
    //         x+=ans;
    //     }
    //     ans++;
    // }

    if(n==0){
        cout<<x<<endl;
        return;
    }


    long long D;
    switch (n%4)
    {
    case 1:D=-n;break;
    case 2:D=1;break;
    case 3:D=1+n; break;
    default:D=0;break;
    }

    if(x%2==0)cout<<D+x<<endl;
    else cout<<x-D<<endl;
    
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