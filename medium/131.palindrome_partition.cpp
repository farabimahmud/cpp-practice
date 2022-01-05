#include<iostream>
#include<string>
#include<vector>

using namespace std;

ostream& operator<<(ostream& os, const vector<string> v){
    for (int i=0; i<v.size(); i++){
        os << v.at(i);
        if(i<v.size()-1) os << ",";
    }
    os.flush();
}
class Solution {
public:
    bool isPalindromeArray[16][16];
    bool isPalindrome(string s, int start=0, int end=-1){
        if (end==-1) end = s.length()-1;
        while(start<end){
            if(s.at(start++)!=s.at(end--)){
                return false;
            }
        }
        return true;
    }

    void divide(string s, int start_index, vector<string> &current,
        vector<vector<string>> &solution){
        if (start_index == s.length()){
            solution.push_back(current);
            return;
        }
        for(int end_index=start_index;end_index<s.length(); end_index++){
            if(isPalindromeArray[start_index][end_index]){
                current.push_back(s.substr(start_index,end_index-start_index+1));
                divide(s,end_index+1,current,solution);
                current.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> results;
        vector<string> current;
        for(int i=0;i<s.length();i++){
            for(int j=0; j<s.length();j++){
                isPalindromeArray[i][j] = isPalindrome(s,i,j);
            }
        }
        divide(s,0,current, results);
        return results;
    }
    
};

int main(){
    string test = "aabb";
    Solution s;
    vector<vector<string>> results = s.partition(test);
    for(auto v:results){    
        cout << "[" <<  v << "]" << endl;
    }

}