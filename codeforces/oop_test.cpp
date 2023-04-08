#include <iostream>
#include <string>
using namespace std;
class Rect{
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
    public:
        Rect(int length,int breadth){
            this->length = length;
            this->breadth = breadth;
        }
        int doSth(Rect rect){
            rect.length = 10;
        }
        int getLength(){
            return length;
        } 
};
int main(){
    Rect r1(10,10);
    Rect r2(20,20);
    r1.doSth(r2);
    cout << r2.getLength();
    return 0;
}