#include <bits/stdc++.h>
using namespace std;
int main(){
    int N; cin >> N;
    set<string> seen;
    for(int i = 0; i < N;i++){
        string s; cin >> s;
        string reversed_s;
        for(int i = s.length()-1;i>=0;i--){
            reversed_s += s[i];
        }
        if(seen.find(s) == seen.end() && seen.find(reversed_s) == seen.end()){
            seen.insert(s);
        }
    }
    cout << seen.size();
}