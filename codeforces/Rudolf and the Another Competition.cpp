#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   int T; cin >> T;
   while(T--){
        int n,m,h; cin >> n >> m >> h;
        long long rudolph_points = -1;
        long long rudolph_penalty = 0;
        int position = 1;
        for(int i = 0; i < n;i++){
            vector<int> times(m);
            for(int j = 0;j < m;j++){
                cin >> times[j];
            }
            sort(times.begin(), times.end());
            int times_left = h;
            long long points = 0;
            long long penalty = 0;
            while(points < m){
                if(times[points] <= times_left){
                    times_left -= times[points];
                    penalty += h-times_left;
                    points+=1;
                }
                else{
                    break;
                }
            }
            if(rudolph_points == -1){
                rudolph_points = points;
                rudolph_penalty =penalty;
            }
            else{
                if(points > rudolph_points){
                    position += 1;
                }
                else if(points == rudolph_points){
                    if(penalty < rudolph_penalty){
                        position+=1;
                    }
                }
            }
        }
        cout << position << endl;
   }
}