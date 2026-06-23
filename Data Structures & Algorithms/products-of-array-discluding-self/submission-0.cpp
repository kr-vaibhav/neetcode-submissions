class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int sum = 0, product = 1, zCount = 0;
        for(int i : nums){
            sum += i;
            if(i==0)zCount++;
            else{
                product = product * i;
            }
        }

        if(zCount>1)return vector<int>(nums.size(),0);
        vector<int>ans;
        if(zCount==1){
            for(int i = 0; i < nums.size(); ++i){
            if(nums[i]==0)ans.push_back(product);
            else{
                ans.push_back(0);
            }
        }
        return ans;
        }
        for(int i = 0; i < nums.size(); ++i){
            ans.push_back(product/nums[i]);
        }
        return ans;
    }
};
