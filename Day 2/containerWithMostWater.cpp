class Solution {
public:
    int maxArea(vector<int>& height) {
        int i =0, j = height.size()-1;
        
        int area = INT_MIN;
        
        while(i<=j){
            int temp = (j-i) * min(height[i], height[j]);
            
            if(height[j]<height[i]){
                j--;
            }
            else
                i++;
            
            area = max(area, temp);
        }
        
        return area;
    }
};
