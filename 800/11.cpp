// #include<bits/stdc++.h>
// using namespace std;
// int main(){

//     int n;
//     cin>>n;
//     vector<int>arr;
//     vector<int>temp;

//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin>>x;
//         arr.push_back(x);
//     }
//     for(auto it : arr){
//         temp.push_back(abs(it));
//     }
//     sort(temp.begin(),temp.end());
    
    
//     cout<<temp[0]<<endl;
    


//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        arr[i]=abs(x);
    }
    sort(arr,arr+n);
    cout<<arr[0]<<endl;
    
    
return 0;}