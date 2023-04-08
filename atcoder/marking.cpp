#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main(){
   int T; cin >> T;
   vector<int> res;
   while(T--){
    int N; cin >> N;
    int D; cin >> D;
    int K; cin >> K;
    vector<bool> marked(N);
    int A = 0;
    marked[0] = true;
    for(int i = 0; i < K-1;i++){
        A = (A+D)%N;
        while(marked[A]){
            A = (A+1)%N;
        }
        marked[A] = true;
    }
    cout << A << endl;
   }
}