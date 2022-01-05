#include <iostream>
#include <vector>
#include <unordered_map>

using std::vector;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unsigned int sum = 0;
        for (unsigned int i=0;i<nums.size(); i++){
            sum += nums.at(i);
        }
        return nums.size() * (nums.size()+1) / 2 - sum;
    }
};

int main(){
    Solution s;
    vector<int> a = {9,6,4,2,3,5,7,0,1};
    vector<int> b = {0,1};
    vector<int> c = {3,0,1};
    std::cout << s.missingNumber(a) << std::endl;
    std::cout << s.missingNumber(b) << std::endl;
    std::cout << s.missingNumber(c) << std::endl;
}