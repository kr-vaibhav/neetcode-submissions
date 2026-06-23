class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(int i = 0; i < strs.size(); ++i){
            string lenStr = to_string(strs[i].length()) + "#";
            ans += lenStr + strs[i];
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string>ans1;
        int i = 0;
        while (i < s.length()) {
            int pos = s.find('#', i);
            int len = stoi(s.substr(i, pos - i));
            i = pos + 1;
            ans1.push_back(s.substr(i, len));
            i += len;
        }
        return ans1;
    }
};