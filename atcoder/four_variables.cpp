#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
int main() {
	int N;
	cin>>N;
	long long ans = 0;
	for(int i=1;i<=N/2;i++){
		int X = i,Y = N-i;
		long long x = 0,y = 0;
		for(int j=1;j*j<=X;j++){
			if(X%j==0){
				x++;
				if(X!=j*j)x++;
			}
		}
		for(int j=1;j*j<=Y;j++){
			if(Y%j==0){
				y++;
				if(Y!=j*j)y++;
			}
		}
        if(i == N/2 && N%2 == 0){
            ans += x * y;
        }
        else{
             ans += x * y * 2;
        }
	}
	
	cout<<ans<<endl;
	
	return 0;
}