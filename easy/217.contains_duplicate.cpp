#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
    
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_map<unsigned, unsigned> ht;
        bool flag = false;
        for (unsigned int i=0; i<nums.size(); i++){
            std::cout << nums.at(i) << " " ;
            if (ht.find(nums.at(i))!=ht.end()){
                flag = true;
                return true;
            }
            ht[nums.at(i)] = i;
        }
        return flag;
    }
};


int main(){
    Solution s;
    std::vector<int> a = {};

    std:: cout << s.containsDuplicate(a);
}