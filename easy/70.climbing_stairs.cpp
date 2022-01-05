#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int results[46];
    int climbStairs(int n) {
        results[0] = 1;
        results[1] = 1;
        for (int i=2;i<=n;i++){
            results[i] = results[i-1] + results[i-2];
        }
        return results[n];
    }
};

int main(){
    Solution s; 
    cout << s.climbStairs(4);
    return 0;
}