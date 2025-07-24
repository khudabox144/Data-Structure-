#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
void solve(){

    cin>>n;
    if(n&(n-1)) cout<<"NO"<<endl;
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