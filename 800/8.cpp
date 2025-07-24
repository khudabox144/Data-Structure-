#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
       
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        bool ans=false;
        for(int a:arr){
            if(k==a)
            ans=true;
        }
        
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    
return 0;}