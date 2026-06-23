class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        map<int, int>mp;
        int i = 0, j = 0, n = nums.size(); 
        vector<int>ans;
        while( j < n ){
            mp[nums[j]]++;
            if( j - i + 1 == k ){
                ans.push_back(prev(mp.end())->first);
                mp[nums[i]]--;
                if(mp[nums[i]]==0)mp.erase(nums[i]);
                i++;
            }
            j++;
        }

        return ans;

    }
};
