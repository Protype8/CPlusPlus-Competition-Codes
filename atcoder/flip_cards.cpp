#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
using namespace std;
int main() {
	int n; cin >> n;
    vector<int> fronts(n);
    vector<int> backs(n);
    vector<vector<int>> dp(n,vector<int>(2));
    for(int i = 0;i < n;i++){
        cin >> fronts[i];
        cin >> backs[i];
    }
    //One for flipped and one for unflipped
    dp[0] = {1,1};
    for(int i = 1;i < n;i++){
        if(fronts[i] != fronts[i-1]){
            dp[i][1] += dp[i-1][1];
        }
        if(fronts[i] != backs[i-1]){
            dp[i][1] += dp[i-1][0];
        }
        if(backs[i] != backs[i-1]){
            dp[i][0] += dp[i-1][0];
        }
        if(backs[i] != fronts[i-1]){
            dp[i][0] += dp[i-1][1];
        }
        dp[i][0] %= 998244353;
        dp[i][1] %= 998244353;
    }
    int ans = (dp[dp.size()-1][0]+dp[dp.size()-1][1])%998244353;
    cout << ans << endl;
}