#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        int minus=0,plus=0;
        cin>>n;
        int arr[n-1];
        for (int i = 0; i < n-1; i++)
        {
            cin>>arr[i];
            if(arr[i]<0)
            minus-=arr[i];
            else
            plus+=arr[i];
        }

        cout<<(minus-plus)<<endl;
        
    }
    
return 0;}