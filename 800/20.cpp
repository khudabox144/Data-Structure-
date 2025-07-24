#include<bits/stdc++.h>
#include <algorithm> 
using namespace std;
int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> b(n);
        copy(a.begin(), a.end(), b.begin());
        
        if(is_sorted(a.begin(),a.end())){
           for(int i : a){
            cout<<i<<" ";
           }
           cout<<endl;
        }
        else{
            for (int i = 0; i < n; i++)
            {
                b[i]=n-a[i]+1;
            }
            for(int i : b){
                cout<<i<<" ";
            } cout<<endl;
        }

    }
    

return 0;}