#include<bits/stdc++.h>
using namespace std;
long long n;
string s;


void solve(){
    cin>>n;
    cin>>s;
    map<char,int>freq;
    int count=0;
    vector<int>distinct(n,0);
    for (int i = 0; i < n; i++)
    {
        freq[s[i]]++;
        if(freq[s[i]]==1){
            count++;
        }
        distinct[i]=count;
    }
    long long ans=0;
    for(int i=0 ; i<n ; i++){
        ans+=distinct[i];
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