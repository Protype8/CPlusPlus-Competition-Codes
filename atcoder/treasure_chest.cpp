#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
   int bracket_count = 0;
   int n;cin >> n;
   bool in = false;
   for(int i = 0;i < n;i++){
    char c;cin >> c;
    if(c == '|'){
        bracket_count += 1;
    }
    else if(c == '*'){
        if(bracket_count == 1){
            in = true;
            break;
        }
    }
   }
   cout << (in ? "in":"out") << endl;
}