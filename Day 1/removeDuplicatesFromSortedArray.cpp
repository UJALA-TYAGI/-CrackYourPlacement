class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return {};
        
        int j = 1;
        for(int i = 1; i<nums.size(); i++){
            if(nums[j-1]!=nums[i]){
                nums[j] = nums[i];
                j++;
            }
        }
        
        return j;
    }
};
