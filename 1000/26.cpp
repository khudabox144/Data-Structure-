#include<bits/stdc++.h>
using namespace std;
long long x,y,k;
string s;
void solve(){
    cin>>x>>y>>k;
    long long sticks_for_coal=y*k;
    long long total=sticks_for_coal+k;
    long long operations = (total - 1 + (x - 1) - 1) / (x - 1);
    cout<<operations+k<<endl;
    
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