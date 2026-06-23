class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>Mh;
        map<int,int>mp;
        vector<int>ans;
        for(int i : nums)mp[i]++;
        for(auto it : mp){
            Mh.push({it.second, it.first});
        }
        while(!Mh.empty() && k > 0 ){
            pair<int,int>p = Mh.top();
            Mh.pop();
            ans.push_back(p.second);
            k--;
        }
        return ans;
    }
};
