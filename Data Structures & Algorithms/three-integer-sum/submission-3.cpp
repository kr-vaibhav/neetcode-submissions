class Solution {
    void twoSum(vector<int>&numbers,int start, int target,vector<vector<int>>&ans,unordered_set<string>&st ){
        int i=start, j = numbers.size()-1;
        while(i<j){
            string s =
                    to_string(-target) + "," +
                    to_string(numbers[i]) + "," +
                    to_string(numbers[j]);
            if(numbers[i]+numbers[j]==target){
                if(st.find(s)==st.end()){
                    ans.push_back({-target,numbers[i],numbers[j]});
                    st.insert(s);
                }
                i++,j--;
            }
            else if(numbers[i]+numbers[j]>target)j--;
            else i++;
        }
    }
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_set<string>st;
        vector<vector<int>>ans;
        for(int i = 0; i < nums.size(); ++i){
            int target = -nums[i];
            twoSum(nums,i+1,target,ans,st);
            
        }

        return ans;
    }
};
