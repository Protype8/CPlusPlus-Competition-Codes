#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;
#define int long long
//Each permutation will have the same beauty
//In the case of 1 2 3 every pair will have 2 points no matter what because 1 2 3 3 2 1 
// 3 will have 2 points with 1
//3 will have 2 points with 2
//2 will have 2 points with 1
// So the beauty of each permutations will be nC2*2 which can be simiplifed into n*(n-1)
//Mutiply it by n! for each permuation and you get the answer
signed main()
{
    const int N = 1e5 + 5;
    const int mod = 1e9 + 7;
    vector<int> fact(N);
    fact[0] = 1;
    for(int i = 1; i < N; i++)
    {
        fact[i] = fact[i - 1] * i;
        fact[i] %= mod;
    }
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int ans = n * (n - 1);
        ans %= mod;
        ans = (ans * fact[n]) % mod;
        cout << ans << endl;
    }
    return 0;
}