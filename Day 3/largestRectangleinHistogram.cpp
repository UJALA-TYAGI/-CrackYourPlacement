class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans = 0, j;
        stack<int> s;
        heights.push_back(0);
        int n = heights.size();
        for (int i =0; i< n;){
            
            
            if(s.empty() || heights[i]>=heights[s.top()]){
                s.push(i);
                i++;
            }
            
            else{
                int j = s.top();
                s.pop();
                ans = max(ans, heights[j]*(s.empty()?i:i-s.top()-1));
            }
            
        }
        return ans;
        
    }
};
