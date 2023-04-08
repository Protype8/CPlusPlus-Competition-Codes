#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
using namespace std;
struct hashFunction 
{
  size_t operator()(const vector<int> 
                    &myVector) const 
  {
    std::hash<int> hasher;
    size_t answer = 0;
      
    for (int i : myVector) 
    {
      answer ^= hasher(i) + 0x9e3779b9 + 
                (answer << 6) + (answer >> 2);
    }
    return answer;
  }
};
int main() {
	int n;cin >> n;
    string s;cin >> s;
    vector<int> current_pos = {0,0};
    unordered_set<vector<int>,hashFunction> set;
    bool revisited = false;
    set.insert(current_pos);
    for(char c:s){
        vector<int> new_pos;
        if(c == 'R'){
            current_pos[1] += 1;
        }
        if(c == 'L'){
            current_pos[1] -= 1;
        }
        if(c == 'U'){
            current_pos[0] -= 1;
        }
        if(c == 'D'){
            current_pos[0] += 1;
        }
        new_pos = current_pos;
        if(set.find(current_pos) != set.end()){
            revisited = true;
            break;
        }
        set.insert(new_pos);
    }
    cout << (revisited ? "Yes":"No")<< endl;
}
