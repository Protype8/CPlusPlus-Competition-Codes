#include<bits/stdc++.h>
#include<atcoder/fenwicktree>
using namespace std;
using namespace atcoder;
using ll = long long;
int main() {
    int n, m;
    cin >> n >> m;
    vector a(n, vector<int>(m));
    vector<int> v;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            v.push_back(a[i][j]);
        }
    }
    sort(v.begin(), v.end());
    
    ll ans = (ll) m * (m + 1) / 2 * n * (n - 1) / 2;
    fenwick_tree<int> fw(n * m);
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < m; j++) {
            a[i][j] = lower_bound(v.begin(), v.end(), a[i][j]) - v.begin();
            ans += fw.sum(0, a[i][j]);
        }
        for (int j = 0; j < m; j++) {
            fw.add(a[i][j], 1);
        }
    }
    cout << ans << endl;
}