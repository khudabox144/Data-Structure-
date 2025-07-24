#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
void solve(){
    cin>>n;
    cin>>s;
    long long current=1;
    long long count=1;
     for (int i = 1; i < n; i++)
     {
        if(s[i]==s[i-1]){current++; count=max(current,count);}
        else{
            current=1;
        }
        
     }

     cout<<count+1<<endl;
     
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