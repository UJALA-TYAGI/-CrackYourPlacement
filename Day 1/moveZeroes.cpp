class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        
                int j = 0;
        for(int i = 0; i<n; i++){
            if (nums[i]!=0){
                swap(nums[j],nums[i]);
                j++;
            }
        }
        
//          int i =0, j=i+1;
// 	    while(j<n){
	        
// 	       if(nums[i]!=0 && nums[j]!=0){
// 	           i++;
// 	       }
	       
// 	       if(nums[i]==0 && nums[j]!=0){
// 	           swap(nums[i],nums[j]);
// 	           i++;
// 	       }
	       
// 	       j++;
//       }
        

    }
};
