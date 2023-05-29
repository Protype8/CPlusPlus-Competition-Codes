#include <bits/stdc++.h>
#include <iostream>
#include <unordered_set>
using namespace std;
struct hashFunction
{
  size_t operator()(const tuple<int , 
                    int>&x) const
  {
    return get<0>(x) ^ get<1>(x);
  }
};
  
int main(){
   int N,M;cin >> N >> M;
   unordered_set<tuple<int,int>,hashFunction> s;
   for(int i = 1;i < N+1;i++){
    for(int j = i+1;j < N+1;j++){
        tuple<int,int> current = make_tuple(i,j);
        s.insert(current);
    }
   }
   int prev;
   for(int i = 0;i < M;i++){
    for(int j = 0;j < N;j++){
        if(j == 0){
            cin >> prev;
        }
        else{
            int current;cin >> current;
            tuple<int,int> val_to_remove;
            val_to_remove = current < prev ? make_tuple(current,prev) : make_tuple(prev,current);
            s.erase(val_to_remove);
            prev=current;
        }
      
    }
   }
   cout << s.size() << endl;
   
}