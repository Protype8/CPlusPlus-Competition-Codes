#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
   int low = 1;
   int high; cin >> high;
   while(low <= high){
    int mid = (low+high)/2;
    printf("? %d\n", mid);
    fflush(stdout);
    int val; scanf("%d",&val);
    if(val == 0){
        low = mid+1;
    }
    else{
        high = mid-1;
    }
   }
   printf("! %d\n", high);
   fflush(stdout);
   return 0;
}