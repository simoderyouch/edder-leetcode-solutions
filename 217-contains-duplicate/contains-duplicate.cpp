
class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end()); 

        for (size_t i = 0; i + 1 < nums.size(); ++i) {
            if (nums[i] == nums[i+1]) {
                return true;
            }
        }
        return false;
    }
};