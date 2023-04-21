#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    for(int casenum = 0; casenum < cases; casenum++) {
        string s1, s2;
        cin >> s1 >> s2;

        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;
        int e = 0;
        int f = 0;

        for(int i = 0; i < s1.size(); i++) {
            if(s1[i] == '0' && s2[i] == '1') b++;
            if(s1[i] == '1' && s2[i] == '0') c++;
            if(s1[i] == '?' && s2[i] == '0') e++;
            if(s1[i] == '?' && s2[i] == '1') f++;
        }
        int ans = 0;
        //Swap 1 and 0s
        ans = min(b,c);
        b -= ans;
        c -= ans;
        if(b > 0) {
            //If zeros are left change the zeros into ones and reveal the ? to their respective numbers
            ans += b + e + f;
        }
        else {
            //If ones are left, first check if you can swap the ? corresponding to 1 with the leftover ones
            if(f < c) {
                ans = -1;
            }
            else {
                //If you can,swap them
                ans += c;
                //Then, reveal the ?
                ans += e+f;
            }
        }
        cout << "Case " << casenum+1 << ": " << ans << endl;
    }
}
