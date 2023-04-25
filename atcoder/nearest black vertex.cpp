#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    int n,m; cin >> n >> m;
    vector<vector<int>> graph(n, vector<int>());
	for (int i = 0; i < m; i++) {
		int a, c;
		cin >> a >> c;
		a--; c--;
		graph[a].push_back(c);
		graph[c].push_back(a);
	}
    int k;cin >> k;
    for(int i = 0;i < k;i++){
        
    }
}