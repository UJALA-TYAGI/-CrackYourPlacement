class Solution {
public:
    int maxPoints(vector<vector<int>>& arr) {
        int n = arr.size();
        
        if(n == 1)
            return 1;
        
        int maxi = 0;
        
        for(int i = 0; i < n; i++)
        {
            unordered_map<long double, int> mp;
            
            for(int j = 0; j < n; j++)
            {
                if(i == j)
                {
                    continue;
                }
                
                long double diff_y = arr[j][1] - arr[i][1];
            
                long double diff_x = arr[j][0] - arr[i][0];
                
                long double slope;
            
                if(diff_x == 0)
                {
                    slope = 1e9;
                }
                else
                {
                    slope = diff_y / diff_x;
                }

                mp[slope]++;
                
                maxi = max(maxi, mp[slope]);
            }
        }
        
        return maxi +1;
    }
};
