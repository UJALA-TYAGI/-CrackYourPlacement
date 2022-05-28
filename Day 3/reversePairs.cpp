class Solution {
public:
    int merge(vector<int> &nums, int low, int mid, int high){
        int count = 0;
        int n = mid - low +1;
        int m = high - mid;
        
        vector<int> arr1(n);
        vector<int> arr2(m);
        
        for(int i = 0; i<n ; i++){
            arr1[i] = nums[low+i]; 
        }
        
        for(int j = 0; j<m ; j++){
            arr2[j] = nums[mid+j+1];
        }
        
        int j = 0;
        int i = 0;
        for(i = 0; i<n ; i++){
            while(j<m && (double)arr1[i]/2 > (double)arr2[j]){
                j++;
            }
            count += j;
        }
        
        i = 0;
        int k = low;
        j = 0;
        while(i<n && j<m){
            if(arr1[i]<=arr2[j]){
                nums[k] = arr1[i];
                i++;
            }
            
            else{
                nums[k] = arr2[j];
                j++;
            }
            k++;
        }
        
        while(i<n){
            nums[k++] = arr1[i++]; 
        }
        
        while(j<m){
            nums[k++] = arr2[j++];
        }
        
        return count;
    }
    
    int mergesort(vector<int> &nums, int low, int high){
        if(low>=high) return 0;
        
        int mid = (low+high)/2;
        int res = mergesort(nums, low, mid);
        res += mergesort(nums, mid+1, high);
        res += merge(nums, low, mid, high);
        return res;
        
    }
    
    
    int reversePairs(vector<int>& nums) {
        int  ans = mergesort(nums,0,nums.size()-1);
        return ans;
    }
};
