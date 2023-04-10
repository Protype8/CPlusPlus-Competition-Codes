#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
  int tt;
  cin >> tt;
  while (tt--) {
   int n; cin >> n;
   int i = 1;
   while(n >= i){
    n -= i;
    i+= 1;
   }
   cout << i-1 << endl;
  }
  return 0;
}