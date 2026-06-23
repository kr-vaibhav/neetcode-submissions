class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for( int i : nums){
            if(st.find(i)==st.end())st.insert(i);
        }
        vector<int>nums1;
        for(int i : st)nums1.push_back(i);
        sort(nums1.begin(),nums1.end());
        int ans = 0, i = 0, j = 1, k = 0;
        if(nums1.size()==0)return 0;
        else if(nums1.size()==1)return 1;
        else{
            int curr = 1;
            for(int i = 1; i < nums1.size(); ++i){
                if(nums1[i]-nums1[i-1]==1){
                    curr++;
                }else{
                    curr=1;
                }
                ans = max(ans,curr);
            }
            return ans;
        }
    }
};
