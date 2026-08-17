class Solution {

    void solve( vector<vector<int>>&ans, vector<int>&nums,vector<int>&temp, int index, int size , int target, int sum){

        if( sum == target){

            ans.push_back( temp );
            return;
        }

        if( index >= size || sum > target ){
            return;
        }
        
        temp.push_back( nums[ index ] );
        solve( ans, nums, temp, index, size, target, sum + nums[ index ] );
        temp.pop_back();
        solve( ans, nums, temp, index + 1, size, target, sum );
        
    }
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        vector<int>temp;

        solve( ans, nums, temp, 0, nums.size(), target, 0 );

        return ans;
    }
};
