#include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>
using namespace std;
struct hashFunction 
{
    size_t operator()(const vector<int> &myVector) const 
    {
        std::hash<int> hasher;
        size_t answer = 0;
        for (int i : myVector) 
    {
        answer ^= hasher(i) + 0x9e3779b9 + 
                            (answer << 6) + (answer >> 2);
    }
    return answer;
}
};
int main(){
   int N,M,H,K;cin >> N >> M >> H >> K;
   bool alive = true;
   unordered_set<vector<int>,hashFunction> set;
   vector<char> S(N);
    for(int i = 0; i < N;i++){
        cin >> S[i];
    }
   for(int i = 0; i < M;i++){
    int x,y;cin >> x >> y;
    vector<int> pos = {x,y};
    set.insert(pos);
   }
   vector<int> current = {0,0};
   for(int i = 0; i < N;i++){
    if(S[i] == 'R'){
        current[0] += 1;
    }
    else if(S[i] == 'L'){
        current[0] -= 1;
    }
    else if(S[i] == 'U'){
        current[1] += 1;
    }
    else if(S[i] == 'D'){
        current[1] -= 1;
    }
    H -= 1;
    if(H < 0){
        alive = false;
        break;
    }
    else{
        if(H < K){
            if(set.find(current) != set.end()){
                H = K;
                set.erase(current);
            }
        }
    }
   }
   cout << (alive ? "Yes":"No");
}