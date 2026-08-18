class Solution {
    void solve(vector<vector<int>>& ans, vector<int>& nums,
               vector<int>& temp, int start, int target) {

        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int i = start; i < nums.size(); i++) {

            // Skip duplicates at the same recursion level
            if (i > start && nums[i] == nums[i - 1])
                continue;

            // Since nums is sorted
            if (nums[i] > target)
                break;

            temp.push_back(nums[i]);

            // i + 1 => each element can be used only once
            solve(ans, nums, temp, i + 1, target - nums[i]);

            temp.pop_back();
        }
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> temp;

        sort(nums.begin(), nums.end());

        solve(ans, nums, temp, 0, target);

        return ans;
    }
};