
class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        // Complexité temporelle O(N log N)
        std::sort(nums.begin(), nums.end()); 

        // Complexité spatiale O(1) supplémentaire (si on ignore l'espace de la pile de tri)
        for (size_t i = 0; i + 1 < nums.size(); ++i) {
            if (nums[i] == nums[i+1]) {
                return true;
            }
        }
        return false;
    }
};