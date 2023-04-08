#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
	int n;cin >> n;
    int e;cin >> e;
    vector<int> players(n);
    for(int i = 0;i < e;i++){
        int event_type; cin >> event_type;
        int player; cin >> player;
        if(event_type == 3){
            cout << (players[player-1] >= 2 ? "Yes":"No") << endl;
        }
        else{
            players[player-1] += event_type;
        }
    }
}
