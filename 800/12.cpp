#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int m; 
        cin>>m;
        vector<int>v;
        vector<int>temp;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        
        temp.push_back(v[0]);

        for (int i = 1; i < m; i++)
        {
            
            if(v[i]>=v[i-1]){
                temp.push_back(v[i]);
            }
            else{
                temp.push_back(v[i]);
                temp.push_back(v[i]);
            }
        }

         cout<<temp.size()<<endl;
         for(auto it : temp){
            cout<<it<<" ";
    }
        
      cout<<endl;

    }
    
return 0;}