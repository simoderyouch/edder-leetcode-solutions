class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        

        unordered_map<int, int> element_counts;
        for (int num : nums) {

            element_counts[num]++;
            if (element_counts[num] > 1) {
               return true;
         }
        }
        return false;
    }
};