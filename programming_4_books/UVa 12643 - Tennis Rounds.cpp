#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
  int n,a,b;scanf("%d %d %d",&n,&a,&b);
  int low = 1;int high = pow(2,n);
  while(n){
    int mid = (low+high)/2;
    if(a <= mid && b > mid){
        cout << n;
        break;
    }
    else if(a > mid && b > mid){
        low = mid;
    }
    else if(a <= mid && b <= mid){
        high = mid;
    }
    n--;
  }
}