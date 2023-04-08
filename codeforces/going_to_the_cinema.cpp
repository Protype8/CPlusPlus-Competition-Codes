#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> cnt(n + 1);
    for (int i = 0; i < n; i++) {
      int a;
      cin >> a;
      cnt[a] += 1;
    }
    int ans = 0;
    int sum = 0;
    for (int k = 0; k <= n; k++) {
      if (cnt[k] == 0 && sum == k) {
        ans += 1;
      }
      sum += cnt[k];
    }
    cout << ans << '\n';
  }
  return 0;
}