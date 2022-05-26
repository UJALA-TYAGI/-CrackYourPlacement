class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_set<int> s;
        vector<int> ans;
        int n = nums.size();
        
        for (int i=0; i<n;i++){
            int d = target - nums[i];
            
            if (s.find(d) != s.end())
            {
                auto it = find(nums.begin(), nums.end(), d);
                if (it != nums.end())
                {
                    int index = it - nums.begin();
                    ans.push_back(index);
            }
                ans.push_back(i);
                break;
            }
            
            s.insert(nums[i]);
            
        }
        
        return ans;   
    }
};
