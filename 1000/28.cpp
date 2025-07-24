#include<bits/stdc++.h>
using namespace std;
long long n;
string s;
void solve(){
    cin>>n;
    cin>>s;
    stack<char>st;
    for (long long i = 0; i < n; i++)
    {
        if(s[i]=='('){
            st.push(s[i]);
        }
        else{
            if(st.empty()){
                continue;
            }
            st.pop();
        }
    }

    cout<<st.size()<<endl;
    
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