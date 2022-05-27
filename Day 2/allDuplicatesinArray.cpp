class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       unordered_set<int> s;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(s.count(nums[i])==1)
                ans.push_back(nums[i]);
            s.insert(nums[i]);
        }
        return ans; 
    }
};
