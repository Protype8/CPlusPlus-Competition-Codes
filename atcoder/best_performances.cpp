#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define endl '\n'
const int MAXN = (1 << 20);
class fenwick {
	int sz;
	vector<int> tr;
    public:
        void init(int n) {
            sz = n + 1;
        }
        fenwick(int n){
            for(int i = 0; i < n;i++){
                tr.push_back(0);
            }
            init(n);
        }
        int query(int idx) {
            int ans = 0;
            for(; idx >= 1; idx -= (idx & -idx)) {
                ans += tr[idx];
            }

            return ans;
        }

        void update(int idx, int val) {
            if(idx <= 0) return;
            for(; idx <= sz; idx += (idx & -idx)) {
                tr[idx] += val;	
            }
        }

	int query(int l, int r) { 
		return query(r) - query(l - 1); 
	}
};
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
    fenwick fw(n*m);
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < m; j++) {
            a[i][j] = lower_bound(v.begin(), v.end(), a[i][j]) - v.begin();
            ans += fw.query(0, a[i][j]);
        }
        for (int j = 0; j < m; j++) {
            fw.update(a[i][j], 1);
        }
    }
    cout << ans << endl;
}