#include<bits/stdc++.h>
using namespace std;
long long a,b,c;
string s;
void solve(){
    cin>>a>>b>>c;
    bool ans=false;
    if (2 * b == a + c) {
       ans=true;
    }
     
    if ((2 * b - c) % a == 0) {
        long long m = (2 * b - c) / a;
        if (m > 0) {
           ans=true;
        }
    }
     
    if ((a + c) % (2 * b) == 0) {
        long long m = (a + c) / (2 * b);
        if (m > 0) {
           ans=true;
        }
    }
     
    if ((2 * b - a) % c == 0) {
        long long m = (2 * b - a) / c;
        if (m > 0) {
           ans=true;
        }
    }

    if(ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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