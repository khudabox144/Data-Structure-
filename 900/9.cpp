#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
void solve(){
    cin>>n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }
    int k=0;
    int diff;
    for (int i = 1; i <= n; i++)
    {
        if(arr[i]!=1){
            diff=abs(i-arr[i]);
            k=__gcd(k,diff);
        }
    }
    
    
    cout<<k<<endl;
    
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