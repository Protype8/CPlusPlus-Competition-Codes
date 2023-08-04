#include <bits/stdc++.h>
using namespace std;
void dfs(unsigned index,int& res,vector<unsigned>& containers,vector<unsigned>& hate,unsigned& T,unsigned& N){
    if(index == N){
        if(size(containers) == T){
            res += 1;
            return;
        }
    }
    for(unsigned i = 0; i < size(containers);i++){
        if(!(containers[i] & hate[index])){
            containers[i] ^= 1U << index;
            dfs(index+1,res,containers,hate,T,N);
            containers[i] ^= 1U << index;
        }
    }
    if(containers.size() < T){
        containers.emplace_back(1U << index);
        dfs(index+1,res,containers,hate,T,N);
        containers.pop_back();
    }
}
int main(){
    unsigned N,T,M; cin >> N >> T >> M;
    vector<unsigned> hate(N);
    for(unsigned i = 0; i < M;i++){
        unsigned a,b; cin >> a >> b;
        hate[--b] |= 1U << --a;
    }
    vector<unsigned> containers;
    int res = 0;
    dfs(0,res,containers,hate,T,N);
    cout << res << endl;
}