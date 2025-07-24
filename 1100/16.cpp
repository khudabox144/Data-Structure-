#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
void solve(){
    cin>>n;
    vector<long long>a(n);
    for(auto &x:a)cin>>x;
    sort(a.begin(),a.end());
    if(a[0]!=1){
        cout<<"NO"<<endl;
        return;
    }
    long long sum=1;
    for (int i = 1; i < n; i++)
    {
        if(a[i]>sum){
            cout<<"NO"<<endl;
            return;
        }
        sum+=a[i];
    }

    cout<<"YES"<<endl;
    
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