#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int testcases; cin >> testcases;
    while(testcases--){
        int arr_length; cin >> arr_length;
        int k; cin >> k;
        vector<int> start_points(arr_length);
        vector<int> end_points(arr_length);
        vector<int> all_ks(51);
        for(int i = 0; i < arr_length; ++i) {
            cin >> start_points[i];
            cin >> end_points[i];
            if(start_points[i] <= k && k <= end_points[i]){
                for(int j = start_points[i];j<end_points[i]+1;j++){
                    all_ks[j] += 1;
                }
            }
        }
        int max = *max_element(all_ks.begin(), all_ks.end());
        int count = 0;
        for(int i = 0; i < all_ks.size();i++){
            if(all_ks[i] == max){
                count += 1;
            }
        }
        string ans = max_element(all_ks.begin(), all_ks.end()) - all_ks.begin() == k && count == 1 ? "yes":"no";
        cout << ans << "\n";
    }
}