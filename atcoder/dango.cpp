#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
   int n;cin >> n;
   int current_level = 0;
   int max_level = 0;
   bool have_dash = false;
   for(int  i = 0; i < n;i++){
    char c;cin >> c;
    if(c == '-'){
        have_dash = true;
        max_level = max(current_level,max_level);
        current_level = 0;
    }
    else if(c == 'o'){
        current_level += 1;
    }
   }
   max_level = max(current_level,max_level);
   cout << (max_level == 0 || !have_dash ? -1:max_level) << endl;
}