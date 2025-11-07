class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
    unordered_map<int, int> mp;

    for (auto x : nums) {
        mp[x]++;
    }

    int maxFreq = 0;
    for (auto &it : mp) {
        if (it.second > maxFreq) {
            maxFreq = it.second;
        }
    }

    int countTotal = 0;
   
    for (auto &it : mp) {
        if (it.second == maxFreq) {
            countTotal += it.second; 
        }
    }

    return countTotal;
}
};