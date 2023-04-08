#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
   int N;cin >> N;
   int Q;cin >> Q;
   int current = 1;
   vector<int> taken;
   vector<int> results;
   while(Q--){
    int event; cin >> event;
    if(event == 1){
        taken.push_back(current);
        current+=1;
    }
    else if(event == 2){
        int val_to_remove;std::cin >> val_to_remove;
        auto pr = std::equal_range(std::begin(taken), std::end(taken), val_to_remove);
        taken.erase(pr.first, pr.second);
    }
    else{
        int a = taken.front();
        results.push_back(a);
    }
   }
   for(int i = 0; i < results.size();i++){
    cout << results[i] << endl;
   }
}