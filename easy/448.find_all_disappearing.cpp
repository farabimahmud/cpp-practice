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
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> results;
        std::unordered_map<int,bool> seen;
        for (unsigned i=0; i<nums.size();i++){
            seen[nums.at(i)] = true;
        }
        for (unsigned i=1; i<=nums.size(); i++){
            if (seen.find(i)==seen.end()){
                results.push_back(i);
            }
        }
        return results;
    }
};


int main(){
    Solution s;
    vector<int> a = {1,2,3};
    vector<int> b = {4,3,2,7,8,2,3,1};
    cout << a << endl;
    cout << s.findDisappearedNumbers(a) << endl;
    cout << s.findDisappearedNumbers(b) << endl;
}