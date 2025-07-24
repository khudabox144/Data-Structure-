#include<bits/stdc++.h>
using namespace std;
long long n;
string s;


// void solve() {
//     int a, b, n;
//     cin >> a >> b >> n;
//     vector <int> tool(n);
//     for (int &x : tool) cin >> x;
 
//     for (int i = 0; i < n; i++) {
//         if (tool[i]<a) {
//             b += tool[i];
//         }
//         else {
//             b += a-1;
//         }
//     }
//     cout << b << nl;
// }
void solve(){
    long long a,b;
    cin>>a>>b>>n;
    vector<long long> v(n+1);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    long long  count=b;
    for (int i = 0; i < n; i++)
    {
        int c=min(v[i]+1,a)-1;
        count+=c;
    }

    cout<<count<<endl;
    
    
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