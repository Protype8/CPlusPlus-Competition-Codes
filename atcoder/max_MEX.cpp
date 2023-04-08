#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main(){
   int N;cin >> N;
   int K;cin >> K;
   set<int> A;
   for(int i = 0; i < N;i++){
    int val;cin >> val;
    A.insert(val);
   }
   int res = 0;
   int tracker = 0;
   for(int val:A){
    if(val == tracker && tracker < K){
        res = tracker+1;
        tracker += 1;
    }
    else{
        break;
    }
   }
   cout << res << endl;
}