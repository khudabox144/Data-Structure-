#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while (t--)
 {
    int a,b,c,d;
    int count=0;
     bool possible = true;
    cin>>a>>b>>c>>d;
    while (1)
    {   if(a==c && b==d) break;
        else{
        if(a==c){
            a+=1;
            b+=1;
        }
        else{
            a-=1;
        }
        }
        count++;

        if ((a < c) || (a == c && b > d)) {
                possible = false;
                break;
            }
    }

     if (possible) {
            cout << count << endl;
        } else {
            cout << -1 << endl;
        }
    
 }
 
return 0;}