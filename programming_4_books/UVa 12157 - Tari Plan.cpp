#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
  int tt;
  cin >> tt;
  while (tt--) {
   int n; cin >> n;
   int total = 0;
   int mile =0;
   int juice =0;
   while(n--){
    int i; cin >> i;
    mile += ((i/30)+1)*10;
    juice += ((i/60)+1)*15;
   }
   
   if(mile < juice) cout << "Mile " << mile << endl;
   else if (mile > juice) cout << "Juice " << juice << endl;
   else cout << "Mile Juice " << juice << endl;
  }
  return 0;
}