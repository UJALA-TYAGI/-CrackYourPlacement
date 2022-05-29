class Solution {
public:

// Two strings are anagrams if and only if their sorted strings are equal.
// So we just use a Hash Table data structure to group strings, where the key is the sorted string of its string.
// For example: strs = ["eat","tea","tan","ate","nat","bat"]
// ["ate","eat","tea"] forms a group, because they have the same key "aet"
// ["nat", "tan"] forms a group, because they have the same key "ant"
// ["bat"] forms a group, because they have the same key "abt"

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        for (const string& str : strs) {
            string key = str;
            sort(key.begin(), key.end());
            groups[key].push_back(str);
        }

        vector<vector<string>> ans;
        for (const auto& p : groups)
            ans.push_back(p.second);
        return ans;
    }
};
