#include <iostream>
#include <string>
using namespace std;
int main(){
    int weight;
    cin >> weight;
    string output = "No";
    for(int i = 2; i < weight;i+=2){
        if((weight-i)%2 == 0){
            output = "Yes";
            break;
        }
    }
    cout<< output;
}