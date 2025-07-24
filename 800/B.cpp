#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while (t--)
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    int count=0;
    for(char c : s) {
        if(c=='0')  count++;
    }
    int count2=n-count;
    int m=n/2;
    int x=m-k;
    bool ans=(0<=x && x<=m) &&
            count>=x && count2>=x&&
            ((count-x)%2==0) && 
            ((count2-x)%2==0);

    cout<<(ans?"YES\n":"NO\n");
}

return 0;}