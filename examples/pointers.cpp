#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int A[5] = {1,2,3,4,5};
    int b = 1;
    int *p = A;
    p+=2;
    cout << p[2];
 
}
