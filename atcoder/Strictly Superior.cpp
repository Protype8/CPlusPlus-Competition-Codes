#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,M; cin >> N >> M;
    vector<int> prices(N);
    vector<set<int>> functions(N);
    for(int i = 0; i < N;i++){
        int C;
        cin >> prices[i]  >> C;
        for(int j = 0;j < C;j++){
            int function_no; cin >> function_no;
            functions[i].insert(function_no);
        }
    }
    int found = false;
    for(int i = 0;i  < N;i++){
        for(int j = 0; j < N;j++){
            if(i != j){
                if(prices[i] > prices[j] && includes(functions[j].begin(), functions[j].end(), functions[i].begin(),
                 functions[i].end())){
                    found = true;
                }
                else if(prices[i] < prices[j] && includes(functions[i].begin(), functions[i].end(), functions[j].begin(),
                 functions[j].end())){
                    found = true;
                }
                else if(prices[i] == prices[j] && functions[i].size() != functions[j].size()){
                    set<int> smaller = functions[i].size() < functions[j].size() ? functions[i]:functions[j];
                    set<int> bigger = functions[i].size() < functions[j].size() ? functions[j]:functions[i];
                    if(includes(bigger.begin(),bigger.end(),smaller.begin(),smaller.end())){
                        found = true;
                    }
                }
            }
        }
    }
    cout << (found ? "Yes":"No") << endl;
}