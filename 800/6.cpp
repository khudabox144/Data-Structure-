#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin>>arr[i];
    }

    map<long long , long long > distinct_numbers;
    for (int i = 0; i < n; i++)
    {
      distinct_numbers[arr[i]]++;
    }

    if(distinct_numbers.size()>2){
      cout<<"NO"<<'\n';
    }
     else{
    long long freq1=distinct_numbers.begin()->second;
    long long freq2=distinct_numbers.rbegin()->second;
    if(freq1==freq2){
      cout<<"YES"<<'\n';
    }
    else if(n%2==1 && abs(freq1-freq2)==1 ){
      cout<<"YES"<<'\n';
    }

    else 
    cout<<"NO"<<'\n';
   }
  }
  
return 0;}