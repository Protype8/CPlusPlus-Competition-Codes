#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main(){
   int N; cin >> N;
   set<string> stuff = {"and", "not", "that", "the", "you"};
   bool found = false;
   for(int i = 0;i < N;i++){
    string a;cin >> a;
    if(stuff.find(a) != stuff.end()){
        found = true;
        break;
    }
   }
   if(found)
    cout << "Yes";
   else
    cout << "No";
}