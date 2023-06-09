#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
	int testcases; cin >> testcases;
    while(testcases--){
        int n; cin >> n;
        string s; cin >> s;
        string res;
        int prev=0;
        for(int i = 1; i < n;i++){
            if(s[i] == s[prev]){
                res += s[i];
                prev = i+1;
                i++;
            }
        }
        cout << res << endl;
    }
    return 0;
}