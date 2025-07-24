#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int plus=0,minus=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]==-1) minus++;
            else plus++;
        }

        int operations=0;
        while (minus>plus || minus%2==1)
        {
            plus++;
            minus--;
            operations++;
        }

        cout<<operations<<endl;
        
        
    }
    


return 0;}