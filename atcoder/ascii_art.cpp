#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
   int H;cin >> H;
   int W;cin >> W;
   vector<vector<int>> input(H,vector<int>(W));
   vector<char> alphabets = {'.','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
   for(int i = 0;i < H;i++){
    for(int j = 0;j < W;j++){
        int current;cin >> current;
        input[i][j] = current;
    }
   }
   for(int i = 0;i < H;i++){
    for(int j = 0;j < W;j++){
        cout<<alphabets[input[i][j]];
    }
   cout<<endl;
   }
}