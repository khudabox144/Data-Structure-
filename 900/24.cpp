#include<bits/stdc++.h>
using namespace std;
long long a,b;
string s;
void solve(){
    cin>>a>>b;
    if(b>a)swap(a,b);
    if(a==b){
        cout<<0<<" "<<0<<endl;
        return;
    }

    long long gcd=a-b;
    long long minimize=min(b%gcd,gcd-(b%gcd));
    cout<<gcd<<" "<<minimize<<endl;

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