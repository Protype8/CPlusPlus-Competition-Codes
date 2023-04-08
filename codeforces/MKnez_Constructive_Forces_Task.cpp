#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//It is impossible to make the pattern with 1 and 3 because maths
//It is gunranteed to be True if it is even because you can use -5000 and 5000 to cancel the sum to 0
//If it is odd and n is more than 5 you can use maths it out man I dont fucking know how i got it I just got it

int main(){
    int testcases; cin >> testcases;
    while(testcases--){
        int n; cin >> n;
        if(n%2 == 0 || n >= 5){
            cout << "YES" << endl;
            for(int i = 0; i < n;i++){
                if(n%2 == 0){
                    cout << (i%2 == 0 ? 5000:-5000) << " ";
                }
                else{
                    int the_thingy = n-3;
                    cout << (i%2 == 0 ? -the_thingy:the_thingy+2) << " ";
                }
            }
            cout << endl;
        }
        
        else{
            cout << "NO" << endl;
        }
      
    }
    return 0;
}