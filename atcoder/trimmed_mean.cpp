#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n;cin >> n;
    vector<int> scores(5*n);
    for(int i = 0;i < 5*n;i++){
        int score; cin >> score;
        scores[i] = score;
    }
    sort(scores.begin(), scores.end());
    int total_score = 0;
    for(int i = n;i < 4*n;i++){
        total_score += scores[i];
    }
    cout << (float)total_score/(3*n) << endl;
}
