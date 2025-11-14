class Solution {
public:
    bool isAnagram(string s, string t) {
       
        if (s.length() != t.length()) {
            return false;
        }

        int charCounts[26] = {0};

        for (char c : s) {
            charCounts[c - 'a']++; 
        }

        for (char c : t) {
            charCounts[c - 'a']--; 
        }

        for (int count : charCounts) {
            if (count != 0) {
                return false; 
            }
        }

        return true;


    }
};