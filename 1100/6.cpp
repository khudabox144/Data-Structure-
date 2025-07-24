#include<bits/stdc++.h>
using namespace std;
long long n,q;
string s;
void solve(){
    cin>>n>>q;
    vector<long long>a(n),x(q);
    for(auto&y:a)cin>>y;
    for(auto&z:x)cin>>z;

    long long prev=31;
    for (int i = 0; i < q; i++)  
    {
        if(x[i]>=prev)continue;
        long long val=pow(2,x[i]);
        for (int j = 0; j < n; j++)
        {
            if(a[j]%val==0){
                a[j]+=(val/2);
            }
        }
        
        prev=x[i];
    }
    for(auto it : a)cout<<it<<" ";
    cout<<endl;
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