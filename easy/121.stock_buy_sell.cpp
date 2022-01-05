#include <bits/stdc++.h>

using namespace std;


std::ostream& operator<<(std::ostream& os, const vector<int>& obj)
{
    for (unsigned i=0; i<obj.size(); i++){
        os << obj.at(i)<< " ";
    }
    return os;
}

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        return prices[0];
    }
};



int main(){
    Solution s;
    vector<int> a = {1,2,3}; 
    cout << a << endl; 
    cout << s.maxProfit(a) << endl;
}