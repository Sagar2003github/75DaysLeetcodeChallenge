#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> indexMap;

        for(int i = 0; i < nums.size(); i++) {

            int current = nums[i];
            int need = target - current;

            if(indexMap.count(need)) {
                return {indexMap[need], i};
            }

            indexMap[current] = i;
        }

        return {};
    }
};