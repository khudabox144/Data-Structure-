#include<bits/stdc++.h>
using namespace std;
long long a,b;

void solve(){
    cin>>a>>b;
    long long operations;
    long long ans=LLONG_MAX;
    for (long long addition = 0; addition < 32; addition++)
    {
        operations=addition;
        long long new_b=b+addition;
        if(new_b==1)continue;
        long long A=a;
        while (A>0)
        {
            A/=new_b;
            operations++;
        }
        ans=min(operations,ans);
    }
     cout<<ans<<endl;
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