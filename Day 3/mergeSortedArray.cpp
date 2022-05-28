class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i = m, j= 0;
        for (int k= 0; k<n; k++){
            nums1[i++] = nums2[k];
        }
        
        sort(nums1.begin(), nums1.end());
        

// without using extra memory - runtime error
//         int k;
//         for(int i = 0; i<m; i++){
//             if (nums1[i]>nums2[0]){
//                 swap(nums1[i], nums2[0]);
//             }
            
//             int num = nums2[0];
            
//             for (k=1 ; k<n && nums2[k]<num ; k++){
//                 nums2[k-1] = nums2[k];
//             }
//             nums2[k-1] = num;
            
//         }
        
        
//         for(int j = 0; j<n; j++){
//             swap(nums1[m+j], nums2[j]);
//         }
        
        
        //this is using extra memory
//         int i = 0, j=0, k=0;
//         vector<int> ans(m+n);
//         while (i<m && j<n){
            
//             if (nums1[i]<nums2[j]){
//                 ans[k] = nums1[i];
//                 i++;
//                 k++;
//             }
//             else {
//                 ans[k] = nums2[j];
//                 j++;
//                 k++;
//             }
//         }
        
//         while(i<m){
//             ans[k] = nums1[i];
//             i++; 
//             k++;
//         }
        
//         while (j<n){
//             ans[k] = nums2[j];
//             j++;
//             k++;
//         }
        
//         nums1 = ans;
        

        
    
    }
};
