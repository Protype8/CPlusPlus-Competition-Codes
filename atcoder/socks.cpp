#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main(){
   int N;cin >> N;
   map<int,int> sock_to_amount;
   for(int i = 0; i  < N;i++){
        int sock;cin >> sock;
        if(sock_to_amount.find(sock) == sock_to_amount.end()){
            sock_to_amount.insert(pair<int,int>(sock,1));
        }
        else{
            sock_to_amount[sock] += 1;
        }
   }
    int opreations = 0;
    for (map<int, int>::iterator it = sock_to_amount.begin(); it != sock_to_amount.end(); it++)
    {
        int amount = it->second;
        opreations+=(amount/2);
    }
    cout << opreations << endl;
}