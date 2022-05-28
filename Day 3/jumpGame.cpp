class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        // int i = 0;
        // for (int reach = 0; i < n && i <= reach; ++i)
        //     reach = max(i + nums[i], reach);
        // return i == n;
        
        int last = n-1;
        for(int k = n-2; k>=0; k--){
            if(k+nums[k]>=last){
                last = k;
            }
        }
        
        return last==0;
    }
};
