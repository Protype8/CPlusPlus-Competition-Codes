#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int testcases; cin >> testcases;
    while(testcases--){
        int arr_length; cin >> arr_length;  
        vector<int> a(arr_length);
        for(int i = 0; i < arr_length; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        int current = 0;
        long long ans = 0;
        for(int i = 0; i < arr_length;i++){
            if(a[i] != current){
                current += 1;
                ans += a[i]-current;
            }
        }
        cout << ans << '\n';
    }
}