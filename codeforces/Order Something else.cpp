#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int N,P,Q; cin >> N >> P >> Q;
    vector<int> dishes(N);
    for(int i =0;i < N;i++){
        cin >> dishes[i];
    }
    int min_ele = *min_element(dishes.begin(), dishes.end());
    cout << min(P,min_ele+Q);
}