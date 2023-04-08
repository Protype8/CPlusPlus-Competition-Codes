#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//Get first and last word add with length of word -2 gg

int main(){
    int testcases; cin >> testcases;
    while(testcases--){
        string n; cin >> n;
        if(n.length() > 10)
            cout << n[0] << n.length()-2 << n[n.length()-1] << endl;
        else
            cout << n << endl;
    }
    return 0;
}