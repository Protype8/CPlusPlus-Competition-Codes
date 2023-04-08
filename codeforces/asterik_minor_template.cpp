#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//Check if they have the same first if so you can put asterik at the back to make the template
//Do the same for the last character
//If not we need to search for the characters in the middle
//Two asteriks are needed so we need two or more characters
// I got error by searching for as much characters as possible but only two characters need to be searched
//If the same combination of two characters exist in both strings we can make a template string by *{char1}{char2}*
int main(){
    int t;
    cin >> t;
    while(t>0){
        --t;
        string a;
        cin >> a;
        string b;
        cin >> b;
        if(a[0] == b[0]){
            cout << "YES" << endl;
            cout << a[0] << "*" << endl;
            continue;
        }
        if(a[a.length()-1] == b[b.length()-1]){
            cout << "YES" << endl;
            cout << "*" << a[a.length()-1] << endl;
            continue;
        }

        bool found = false;
 
        for(int i=0;i<a.length()-1;i++){
            string f = std::string() + a[i] + a[i+1];
            if(b.find(f) != string::npos){
                found = true;
                cout << "YES" << endl;
                cout << "*" << f << "*" << endl;
                break;
            }
        }
 
        if(found) continue;

        cout << "NO" << endl;
    }

    return 0;
}