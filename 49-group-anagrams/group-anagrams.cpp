class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {


        unordered_map<string, vector<string>> res;

    for (const auto& s : strs) {

        int charCounts[26] = {0};

        cout << "Processing string: " << s << endl;

        // Count letters
        for (char c : s) {
            charCounts[c - 'a']++;
           
        }

        string key;
        for (int i = 0; i < 26; i++) {
            key += to_string(charCounts[i]) + "#";
        }


        res[key].push_back(s);
    }

    vector<vector<string>> result;
    for (auto &p : res) {
        result.push_back(p.second);
    }

    return result;

    
        
    }
};