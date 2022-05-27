class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
	vector< vector<int> > result;
	long n = nums.size();
	if (n < 4) 	return result;


	sort(nums.begin(), nums.end());
	for (int i = 0; i < n-3; ++i) {
		if (target <= 0 && nums[i] > 0) break;

		if ((long long)nums[i] + (long long)nums[i+1] + (long long)nums[i+2] + (long long)nums[i+3] > target) break;
		if ((long long)nums[i] + (long long)nums[n-3] + (long long)nums[n-2] + (long long)nums[n-1] < target) continue; 
		if (i > 0 && nums[i] == nums[i-1]) continue;

		for (int j = i+1; j < n - 2; ++j) {
			if ((long long)nums[i] + (long long)nums[j] + (long long)nums[j+1] + (long long)nums[j+2] > target) break;
			if ((long long)nums[i] + (long long)nums[j] + (long long)nums[n-2] + (long long)nums[n-1] < target) continue; 
			if (j > i+1 && nums[j] == nums[j-1]) continue;

			int left = j+1, right = n-1;
			while (left < right) {
				int sum = nums[i] + nums[j] + nums[left] + nums[right];
				if (sum == target) 
                {
					result.push_back({nums[i], nums[j], nums[left], nums[right]});
					while (left < right && nums[left] == nums[left+1]) left++;
					while (left < right && nums[right] == nums[right-1]) right--;
                    left++;
                    right--;
				} 
                else if (sum < target) { ++left; } 
                else { --right; }
			}
		}
	}
	return result;
    }
};
