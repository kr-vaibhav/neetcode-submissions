class Solution {
    void solve( vector<vector<int>>&ans, vector<int>&nums,vector<int>temp, int index, int size ){
        if( index >= size ){
            ans.push_back(temp);
            return;
        }

        solve( ans, nums, temp, index + 1, size);
        temp.push_back( nums[index] );
        solve( ans, nums, temp, index + 1, size);
    }
    
public:

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;

        solve( ans, nums, {}, 0, nums.size());
        return ans;
    }
};
