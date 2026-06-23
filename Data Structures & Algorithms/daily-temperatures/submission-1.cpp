class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int>ans(n,0);
        stack<int>st;
        for( int i = 0; i < n ; ++i ){
            int temp = temperatures[i];
            if(st.empty())st.push(i);
            else{
                int count = 0;
                if( temperatures[st.top()] < temp ){
                    while( !st.empty() && temperatures[st.top()] <  temp){
                        int diff = i - st.top();
                        ans[st.top()] = diff;
                        st.pop();
                    }
                    st.push(i);
                }else{
                    st.push(i);
                }
            }
        }
        return ans;

    }
};
