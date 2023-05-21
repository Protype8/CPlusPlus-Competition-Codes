#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
    vector<char> to_check = {'s','n','u','k','e'};
	vector<vector<char>> graph(n, vector<char>(m));
    for(int i = 0; i < n;i++){
        for(int j = 0;j < m;j++){
            cin >> graph[i][j];
        }
    }
    for(int i = 0; i < n;i++){
        for(int j = 0;j < m;j++){
            //Generate Direction
            for(int x = -1;x < 2;x++){
                for(int y = -1;y < 2;y++){
                    //Check if in Bounds
                    if(i+(x*4) >= 0 && i+(x*4) < n && j+(y*4) >= 0 && j+(y*4) < m){
                        bool valid = true;
                        for(int k = 0; k < to_check.size();k++){
                            if(graph[i+(x*k)][j+(y*k)] != to_check[k]){
                                valid = false;
                                break;
                            }
                        }
                        if(valid){
                            for(int k = 0; k < to_check.size();k++){
                                cout << i+(x*k)+1 <<" "<< j+(y*k)+1 << endl;
                            }
                        }
                    }
                }
            }
        }
    }
}
