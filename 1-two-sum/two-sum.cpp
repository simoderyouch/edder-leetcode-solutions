class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        std::unordered_map<int, int> seen_nums;

        for (int i = 0; i < nums.size(); ++i) {
            int current_num = nums[i];
            int complement = target - current_num;


            if (seen_nums.count(complement)) {
                return {seen_nums[complement], i};
            }


            seen_nums[current_num] = i;
        }


        return {}; 

        

    }
};