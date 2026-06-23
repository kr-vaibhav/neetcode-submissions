class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int i = 0, j = 1, n = s.length(), ans = 0;

        if(n==1)return 1;
        st.insert(s[i]);

        while(j<n){
            
            if( st.find(s[j]) == st.end() ){
                st.insert(s[j]);
                ans = max(ans,j-i+1);
            }else if( st.find(s[j]) != st.end() ){
                while(st.find(s[j]) != st.end() ){
                    st.erase(s[i]);
                    i++;
                }
                ans = max(ans, j-i+1);
                st.insert(s[j]);
            }
                j++;
            
        }

        return ans;
    }
};
