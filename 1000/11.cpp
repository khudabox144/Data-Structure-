#include<bits/stdc++.h>
using namespace std;
long long n,d;
string s;
void solve(){
    cin>>n>>d;
    vector<long long>p(n);
    for (int i = 0; i < n; i++)
    {
        cin>>p[i];
    }
    sort(p.begin(),p.end(),greater<long long>());
    long long i=0,m=1;
    while (n>0)
    {
        if(m*p[i]>d){
            n-=m;
            if(n<0)break;
            i++;
            m=1;
        }
        else{
            m++;
        }
    }
    
    cout<<i-1<<endl;

    
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