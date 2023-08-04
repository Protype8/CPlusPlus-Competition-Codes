#include <iostream>
using namespace std;
int main(){
   int T; cin >> T;
   
   while(T--){
    int res = 0;
    int N; cin >> N;
    for(int i = 0; i < N;i++){
        int a,b; cin >> a >> b;
        if(a-b > 0){
            res += 1;
        }
    }
    cout << res << endl;
   }
}