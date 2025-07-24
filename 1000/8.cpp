#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
void solve(){
    cin>>n;
    cin>>s;
    set<char>prefix,suffix;
    map<char,int>mp;
    for(char c : s){
        suffix.insert(c);
    }
        
    
    for(char c : s){
    {  mp[c]++;}
    }
    long long ans=LLONG_MIN;
    for(char c : s){
        prefix.insert(c);
        mp[c]--;
        if(mp[c]==0){
            suffix.erase(c);
        }
        long long cur = prefix.size()+suffix.size();
        ans=max(ans,cur);
    }

    cout<<ans<<endl; 
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