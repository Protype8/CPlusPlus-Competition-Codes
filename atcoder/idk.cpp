#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
   int N;cin >> N;
   int K;cin >>  K;
   string res;
   for(int i = 0; i < N;i++){
    char par;cin >> par;
    if(par == 'o' && K > 0){
        res += "o";
        K--;
    }
    else{
        res += "x";
    }
   }
   cout << res << endl;
}