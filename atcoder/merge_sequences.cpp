#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
   int N;cin >> N;
   int M;cin >> M;
   vector<int> A(N),A_pos(N);
   vector<int> B(M),B_pos(M);
   for(int i = 0; i < N;i++){
    cin >> A[i];
   }
   for(int i = 0; i < M;i++){
    cin >> B[i];
   }
   int a_counter = 0,b_counter = 0;
   while(a_counter < N && b_counter < M){
    if(A[a_counter] < B[b_counter]){
        A_pos[a_counter] = a_counter+b_counter+1;
        a_counter++;
    }
    else{
        B_pos[b_counter] = a_counter+b_counter+1;
        b_counter++;
    }
   }
   for(int i = a_counter;i < N;i++){
    A_pos[a_counter] = a_counter+b_counter+1;
    a_counter++;
   }
   for(int i = b_counter;i < M;i++){
    B_pos[b_counter] = a_counter+b_counter+1;
    b_counter++;
   }
   for(int i = 0; i < N;i++){
    cout << A_pos[i] << " ";
   }
   cout<<endl;
   for(int i = 0; i < M;i++){
    cout << B_pos[i] << " ";
   }
   cout<<endl;
}