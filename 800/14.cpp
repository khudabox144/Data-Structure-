#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+c>=(b+c)) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    
return 0;}