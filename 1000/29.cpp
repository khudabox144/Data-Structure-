#include<bits/stdc++.h>
using namespace std;
long long a,b;
string s;
void solve(){
    cin>>a>>b;
    long long ra=a,rb=b;
    while(ra%2!=0)ra/=2;
    while(rb%2!=0)rb/=2;
    if(ra!=rb)cout<<-1<<endl;
    else{
        a/=ra;
        b/=rb;
        a=log2(a);
        b=log2(b);
        long long ans=ceil(abs(a-b)/3);
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