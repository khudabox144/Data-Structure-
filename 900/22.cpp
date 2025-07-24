#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
void solve(){
    cin>>n;
    long long a[n];long long zeros=0,ones=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]==0)zeros++;
        if(a[i]==1)ones++;
    }

    long long result = ones * pow(2,zeros);
    cout<<result<<endl;
    
}
int main(){
long long t;
cin >> t;
while (t--)
{
solve();
}
return 0;
}