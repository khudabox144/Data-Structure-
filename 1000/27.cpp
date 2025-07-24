#include <bits/stdc++.h>
using namespace std;

bool isFair(long long n) {
    long long num = n;
    while (num != 0) {
        long long digit = num % 10;  
        if (digit != 0 && n % digit != 0) { 
            return false;
        }
        num /= 10;  
    }
    return true;
}

int main() {
    int t;
    cin >> t;  
    while (t--) {
        long long n;
        cin >> n; 
        while (!isFair(n)) { 
            n++;
        }
        cout << n << endl; 
    }
    return 0;
}