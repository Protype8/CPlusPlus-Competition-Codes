#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;cin >> n;
    char last_gender;cin >> last_gender;
    bool aternating = true;
    for(int i = 0; i < n-1;i++){
        char current_gender;cin >> current_gender;
        if(current_gender == last_gender){
            aternating = false;
            break;
        }
        last_gender = current_gender;
    }
    cout <<(aternating ? "Yes" : "No");
}