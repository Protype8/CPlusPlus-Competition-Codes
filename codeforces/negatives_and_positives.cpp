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
        long long sum = 0;
        int negs = 0;
        for(int i = 0; i < arr_length; ++i) {
            cin >> a[i];
            if(a[i] < 0) {
                ++negs;
                a[i] = -a[i];
            }
            sum += a[i];
        }
        sort(a.begin(), a.end());
        if(negs & 1) sum -= 2 * a[0];
        cout << sum << "\n";
    }
}