#include <bits/stdc++.h>
#include <iostream>
#include <map>
using namespace std;
int main() {
    int n; cin >> n;
    string cur_dir = "+x";
    n--;
    while(n--){
        string rotate_dir; cin >> rotate_dir;
        bool negative = cur_dir[0] == '-';
        if(cur_dir == "+x"){
            cur_dir = rotate_dir;
        }
        else if(cur_dir == "-x"){
            string cur_dir = ( cur_dir[0] == '+' ? "-":"+") + rotate_dir[1];
        }
        else if(cur_dir[1] == 'y'){
            if(rotate_dir == "-y"){
                cur_dir = "+x";
            }
            else if(rotate_dir == "+y"){
                cur_dir = "-x";
            }
            if(negative){
                cur_dir = (cur_dir[0] == '+' ? "-":"+") + cur_dir[1];
            }
        }
        else if(cur_dir[1] == 'z'){
            if(rotate_dir == "+z"){
                cur_dir = "-x";
            }
            else if(rotate_dir == "-z"){
                cur_dir = "+x";
            }
            if(negative){
                cur_dir = (cur_dir[0] == '+' ? "-":"+") + cur_dir[1];
            }
        }
    }
    cout<<cur_dir;
}