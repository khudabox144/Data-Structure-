#include<bits/stdc++.h>
using namespace std;
long long n;
string s;

void solve(){
    cin>>n;
   vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    if(arr.front() == arr.back())
    cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<arr.back()<<" ";
        for (int i = 0; i < n-1; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        
    }
    
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