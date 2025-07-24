#include<bits/stdc++.h>
using namespace std;
long long m,n;
string s;
void solve(){
    cin>>m;
    long long mn=LLONG_MAX;
    vector<vector<long long>>v(m);
    vector<long long>l;
    for (int i = 0; i < m; i++)
    {
        cin>>n;
         v[i].resize(n);
        for (int j = 0; j < n; j++)
        {
            cin>>v[i][j];
        }
        sort(v[i].begin(),v[i].end());
        mn=min(v[i][0],mn);
        l.push_back(v[i][1]);
    }
    
    sort(l.begin(),l.end());
    long long sum=0;
    for (int i = 1; i < l.size(); i++)
    {
        sum+=l[i];
    }

    cout<<(mn+sum)<<endl;
    
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