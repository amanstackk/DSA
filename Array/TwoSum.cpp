#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> s;
        for(int i=0 ;i< nums .size(); i++){
            int c=target-nums[i];
            if(s.find(c)!= s.end()){
                return {s[c], i};
            }
            s[nums[i]] = i;
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {9, 2, 7, 15};
    int target = 9;

    vector<int> result = sol.twoSum(nums, target);
    
    if (!result.empty()) {
        cout << "Indices: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }

    return 0;
}
