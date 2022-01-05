#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using std::vector;
using std::cout;
using std::cin; 
using std::endl;


std::ostream& operator<<(std::ostream& os, const vector<int>& obj)
{
    for (unsigned i=0; i<obj.size(); i++){
        os << obj.at(i)<< " ";
    }
    return os;
}


class Solution {
public:
    
    int singleNumber(vector<int>& nums) {        
        int sum = 0;
        std::unordered_map <int, bool> seen;
        for (unsigned i=0; i< nums.size(); i++){
            if (seen.find(nums.at(i))==seen.end()){
                seen[nums.at(i)] = true;
                sum += nums.at(i);
            }
            else{
                sum -= nums.at(i);
            }
        }
        return sum; 
    }
};

int main(){
    Solution s;
    vector<int> a = {1,1,2,2,3};
    vector<int> b = {4,1,2,1,2};
    cout << a << endl;
    cout << s.singleNumber(a) << endl;
    cout << s.singleNumber(b) << endl;
}