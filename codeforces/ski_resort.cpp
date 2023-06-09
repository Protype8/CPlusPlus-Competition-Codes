#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
	int testcases; cin >> testcases;
    while(testcases--){
        int n,k,q;cin >> n >> k >> q;
        long long current_days = 0;
        long long res = 0;
        for(int i = 0; i < n;i++){
            int temp_on_day; cin >> temp_on_day;
            if(temp_on_day <= q){
                current_days +=1;
            }
            else{
                while(current_days >= k){
                   res += (current_days-k)+1;
                   current_days -= 1;
                }
                current_days = 0;
            }
        }
        while(current_days >= k){
            res += (current_days-k)+1;
            current_days -= 1;
        }
        cout << res << endl;
    }
    return 0;
}