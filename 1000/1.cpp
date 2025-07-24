#include<bits/stdc++.h>
using namespace std;
long long n;
string s,t;
void solve(){
    cin>>s;
    long long zeros=0,ones=0;
    for(auto it:s){
        if(it=='0')zeros++;
        if(it=='1')ones++; 
    }
    long long len_of_t=0;
    for (int i = 0; i <s.size() ; i++)
    {
        if(s[i]=='0' && ones>0 ){
            ones--;len_of_t++;
        }
       else if(s[i]=='1' && zeros>0){
            zeros--;len_of_t++;
        }
        else break;
    }

    cout<<s.size()-len_of_t<<endl;
    
    
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