#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
   int n,t; cin >> n >> t;
   int highest_t_rank = 0;
   int p1 = -1;
   int highest_first_num_rank = 0;
   int p2 = -1;
   vector<int> cards(n);
   vector<int> ranks(n);
    for(int i = 0; i < n;i++){
        cin >> cards[i];
    }
    for(int i = 0; i < n;i++){
        cin >> ranks[i];
    }
    for(int i = 0; i < n;i++){
        if(cards[i] == t){
            if(highest_t_rank < ranks[i]){
                highest_t_rank = ranks[i];
                p1 = i+1;
            }
            
        }
        else if(cards[i] == cards[0]){
            if(highest_first_num_rank < ranks[i]){
                highest_first_num_rank = ranks[i];
                p2 = i+1;
            }
            
        }
    }
    if(p1 == -1)cout << p2;
    else cout << p1;
}