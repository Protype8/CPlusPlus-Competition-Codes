#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
	int testcases; cin >> testcases;
    while(testcases--){
        int n,k; cin >> n >> k;
        k = min(k, 30);
        k = pow(2,k);
        if(k <= n){
            cout << k << endl;
        }
        else{
            cout << n+1  << endl;
        }
    }
    return 0;
}