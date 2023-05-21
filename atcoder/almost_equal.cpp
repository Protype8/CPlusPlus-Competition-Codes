#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
void NextVertex(int K,vector<int>& path,vector<vector<int>>& graph){
    do{
        path[K] = (path[K]+1)%(path.size()+1);
        if(path[K] == 0){
            return;
        }
        bool taken = false;
        for(int i = 0;i < K;i++){
            if(path[i] == path[K]){
                taken = true;
                break;
            }
        }
        vector<int> v = graph[path[K]-1];
        int p = path[K-1]-1;
        if(!taken && (K == 0 || find(v.begin(), v.end(),p)!=v.end())){
            return;
        }
    }while(true);
}
bool Hamiliton(int K,vector<int>& path,vector<vector<int>>& graph){
    do{
        NextVertex(K,path,graph);
        if(path[K] == 0){
            return false;
        }
        if(K == path.size()-1){
            return true;
        }
        else{
            if(Hamiliton(K+1,path,graph)){
                return true;
            };
        }
    }while(true);
}
int main() {
    int numCnt = 1;
	int N, M;
	cin >> N >> M;
	vector<vector<int>> graph(N, vector<int>());
    vector<int> path(N);
    vector<vector<char>> strings(N, vector<char>(M));
    for(int i = 0; i < N;i++){
        for(int j = 0;j < M;j++){
            cin >> strings[i][j];
        }
    }
    for(int i = 0; i < N;i++){
        for(int k = 0;k < N;k++){
            if(i != k){
                int differences = 0;
                for(int j = 0;j < M;j++){
                    if(strings[i][j] != strings[k][j]){
                        differences += 1;
                    }
                }
                if(differences == 1){
                    graph[i].push_back(k);
                }
            }
        }
    }
    if(Hamiliton(0,path,graph)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
}