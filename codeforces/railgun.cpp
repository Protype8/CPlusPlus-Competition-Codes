#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int q;
    cin >> q;
    while (q--) {
        int n, m;
        cin >> n >> m;
        int r;
        cin >> r;
        bool free[n + 1][m + 1][r + 1];
        for (int i = 0; i <= n; ++i) {
            for (int j = 0; j <= m; ++j) {
                for (int k = 0; k <= r; ++k) {
                    free[i][j][k] = true;
                }
            }
        }
        for (int i = 0; i < r; ++i) {
            int t, d, coord;
            cin >> t >> d >> coord;
            if (d == 1) {
                for (int j = 0; j <= m; ++j) {
                    if (0 <= t - coord - j && t - coord - j <= r) {
                        free[coord][j][t - coord - j] = false;
                    }
                }
            } else {
                for (int j = 0; j <= n; ++j) {
                    if (0 <= t - coord - j && t - coord - j <= r) {
                        free[j][coord][t - coord - j] = false;
                    }
                }
            }
        }
        bool dp[n + 1][m + 1][r + 1];
        for (int i = 0; i <= n; ++i) {
            for (int j = 0; j <= m; ++j) {
                for (int k = 0; k <= r; ++k) {
                    dp[i][j][k] = !(i || j || k);
                    if (free[i][j][k]) {
                        if (i && dp[i - 1][j][k]) {
                            dp[i][j][k] = true;
                        }
                        if (j && dp[i][j - 1][k]) {
                            dp[i][j][k] = true;
                        }
                        if (k && dp[i][j][k - 1]) {
                            dp[i][j][k] = true;
                        }
                    }
                }
            }
        }
        int ans = -1;
        for (int t = r; t >= 0; --t) {
            if (dp[n][m][t]) {
                ans = n + m + t;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}