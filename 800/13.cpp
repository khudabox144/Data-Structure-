#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
       long long n;
       cin>>n;
       vector<long long> a(n);
       for(int i=0 ; i< n ; i++)
       cin>>a[i];

       long long mx=*max_element(a.begin(),a.end());
       vector<long long>b,c;
       for (int i = 0; i < n; i++)
       {
        if(a[i]!=mx)
        b.push_back(a[i]);
        else
        c.push_back(a[i]);
       }

       if(b.size()==0) 
       cout<<-1<<endl;

       else{
        cout<<b.size()<<" "<<c.size()<<endl;
        for(auto it : b){
            cout<<it<<" ";
        }
        cout<<endl;
        for(auto it: c){
            cout<<it<<" ";
        }
        cout<<endl;
       }
       
    }
        
    
    return 0;
}


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
void solve() {
	int n = 0; cin >> n; 
	vector<int> inp; inp.assign(n, 0);
	for (auto& x : inp) cin >> x;
	sort(inp.begin(), inp.end());
	if (inp.back() == inp[0]) {
		cout << "-1\n";
		return;
	}
	else {
		int it = 0;
		while (inp[it] == inp[0]) it++;
		cout << it << " " << n - it << "\n";
		for (int j = 0; j < it; ++j) cout << inp[j] << " ";
		for (int j = it; j < n; ++j) cout << inp[j] << " ";
	}
}
 
int main() {
	int t = 0; cin >> t;
	while (t--) solve();
	return 0;
}