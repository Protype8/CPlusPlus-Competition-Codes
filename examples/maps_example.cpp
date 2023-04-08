#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main(){
    map<int,string> m;
    m.insert(pair<int,string>(10,"Water"));
    map<int,string>::iterator ans = m.find(11);
    if(ans != m.end()){
        cout<<"Found answer: ";
        cout << ans->second;
    }
}