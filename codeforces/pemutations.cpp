#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <set>
using namespace std;
int n;
//First number can be found by checking which number appears most in the first place
//Since first number will be missing at first,second number will be missing at second and so on
//We can find the sequence without the first number, that is the sequence in the correct order starting from the second number
// so we can just add the first number in front of the sequence to get the full permutations
void solve(){
    cin >> n;
    vector<vector<int>>perm(n, vector<int>(n - 1));
    vector<int>p(n, 0);
    vector<int>cnt(n + 1, 0);
    for(int i = 0; i < n; i++){
        p[i] = i + 1;
        for(int j = 0; j < n - 1; j++){
            cin >> perm[i][j];
            if(j == 0) cnt[perm[i][j]]++;
        }
    }
    for(int i = 1; i <= n; i++){
        if(cnt[i] == n - 1){
            p[0] = i;
            break;
        }
    }
    for(int i = 0; i < n; i++){
        if(perm[i][0] != p[0]){
            for(int j = 0; j < n - 1; j++){
                p[j + 1] = perm[i][j];
            }
        }
    }
    for(int i = 0; i < n; i++) cout << p[i] << ' ';
    cout << endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}