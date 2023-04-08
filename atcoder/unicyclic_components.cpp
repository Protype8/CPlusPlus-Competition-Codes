#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void dfs(int V, int& cnt, vector<int>& vis,
         vector<vector<int> >& adj, vector<int>& wC,int& numCnt)
{
    vis[V] = 1;
    wC[V] = numCnt;
    cnt++;
    for (auto& U : adj[V]) {
        if (!vis[U]) {
            dfs(U, cnt, vis, adj, wC,numCnt);
        }
    }
}
int main() {
    int numCnt = 1;
	int N, M;
	cin >> N >> M;
	vector<vector<int>> graph(N+1, vector<int>());
    vector<int> edgeList(M);
	vector<int> deg(N+1);
	for (int i = 0; i < M; i++) {
		int a, c;
		cin >> a >> c;
		graph[a].push_back(c);
        graph[c].push_back(a);
        edgeList.push_back(a);
	}
    vector<int> vis(N + 1);
    vector<int> components;
    int cnt = 0;
    vector<int> wC(N + 1);
    for (int i = 1; i <= N; i++) {
        if (!vis[i]) {
            dfs(i, cnt, vis, graph, wC,numCnt);
            components.push_back(cnt);
            cnt = 0;
            numCnt++;
        }
    }
    vector<int> edgComponent(components.size());
    for (int i = 0; i < M; i++) {
        edgComponent[wC[edgeList[i]] - 1]++;
    }
    if (edgComponent == components)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}