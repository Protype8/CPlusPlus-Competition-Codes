#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main() {
    string s;cin >> s;
    int count = 1;
    for(char c:s){
        if(isupper(c)){
            break;
        }
        count++;
    }
    cout << count << endl;
    return 0;
}