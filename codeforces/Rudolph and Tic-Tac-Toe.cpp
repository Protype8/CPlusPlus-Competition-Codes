#include <iostream>
#include<vector>
using namespace std;
int main(){
   int T; cin >> T;
   while(T--){
        string status = "DRAW";
        vector<vector<char>> grid(3,vector<char>(3));
        for(int i = 0; i < 3;i++){
            for(int j = 0;j < 3;j++){
                cin >> grid[i][j];
            }
        }
        for(int i = 0; i < 3;i++){
            if(grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]){
                status = grid[i][0];
            }
            if(grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i]){
                status = grid[0][i];
            }
        }
        if(grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]){
            status = grid[0][0];
        }
        if(grid[2][0] == grid[1][1] && grid[1][1] == grid[0][2]){
            status = grid[2][0];
        }
        cout << (status != "." ? status:"DRAW") << endl;
   }
}