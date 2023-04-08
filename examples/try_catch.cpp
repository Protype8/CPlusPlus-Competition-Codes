#include <iostream>
using namespace std;
int main(){
	int a= 10,y=0,z;
    try{
        if(y == 0){
            throw 1;
        }
        z = a/y;
    }
    catch(int e){
        cout << "Yaay";
    }
}