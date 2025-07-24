#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long d;
string s;
ll next_prime(ll n){
    
   for (int i = n;; i++)
   {
    bool prime=true;
    for (int j =2; j*j <=i; i++)
    {
        if(i%j==0){
            prime=false;
            break;
        }
    }

    if(prime){
        return i;
    }
    
   }
   
}
int main(){
int t;
cin >> t;
while (t--)
{
cin>>d;
ll p=next_prime(d+1);
ll q = next_prime(p+d);
ll ans=min((p*p*p),(p*q));
cout<<ans<<endl;
}
return 0;
}