class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //one approach
        int n=nums.size()-1;
        int low=1;
        int high=n;
        int mid;
        while(low<high){
            mid=(low+high)/2;
            int count=0;
            for(int num:nums){
                if(num<=mid) count++;
            }
            if(count>mid) high=mid;
            else low=mid+1; 
        }
        return low;
        
        //second approach - but this uses o(n) extra space
        
//         vector<int> v(nums.size(),0);
//         int k = 0;
        
//         for(int i = 0; i<nums.size(); i++){
//             v[nums[i]] +=1; 
//         }
        
//         // for(auto num : v){
//         //     cout<< num<<" ";
//         // }
        
//         for(int i = 1; i<v.size(); i++){
//             if(v[i]>1) {
//                 k = i;
//                 break;
//             }
//         }
//         return k;
        
        //we can't modify the array so can't do sorting
        // sort(nums.begin(), nums.end());
        // int k = 0;
        // for(int i = 0; i<nums.size()-1; i++){
        //     if(nums[i]==nums[i+1]){
        //         k = i;
        //         break;
        //     }
        //     else{
        //         continue;
        //     }
        // }
        // return nums[k];
    }
};
