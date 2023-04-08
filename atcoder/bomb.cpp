#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
   int R,C;
   cin >> R >> C;
   vector<vector<int>> board(R,vector<int>(C));
   for(int i = 0; i < R;i++){
    for(int j = 0;j < C;j++){
        char in;cin >> in;
        if(in == '.'){
            board[i][j] = 0;
        }
        else if(in == '#'){
            board[i][j] = -1;
        }
        else{
            board[i][j] = (int)in-48;
        }
    }
   }
   for(int i = 0; i < R;i++){
    for(int j = 0;j < C;j++){
        int power = board[i][j];
        if(power > 0){
            for(int a = -power;a <= power;a++){
                for(int b=-power;b <= power;b++){
                    if(i+a >= 0 && i+a < R && j+b >= 0 && j+b < C){
                        if((board[i+a][j+b] <= 0 && abs(a)+abs(b) <= power) || (a == 0 && b == 0)){
                            board[i+a][j+b] = 0;
                        }
                    }
                }
            }
        }
    }
   }
   for(int i = 0; i < R;i++){
    for(int j = 0;j < C;j++){
        if(board[i][j] == -1){
            cout << "#";
        }
        else if(board[i][j] == 0){
            cout << ".";
        }
        else{
            cout << board[i][j];
        }
    }
    cout <<endl;
   }
}