#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
void solve(){
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int count=0;
    for (int i = n-2; i>=0 ; i--)
    {
        while (arr[i]>=arr[i+1])
        {
            count++;
            arr[i]/=2;
            if(arr[i]==0) break;
        }
        if(arr[i]==0 && arr[i+1]==0){
                count=-1;
                break;
            }
        
    }
    cout<<count<<endl;
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