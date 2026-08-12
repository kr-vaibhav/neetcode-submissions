class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int size = tasks.size();
        if( n == 0 )return size;
        map<char,int>mp;
        for( char ch : tasks )mp[ch]++;
        int maxFreqCount = 0, mx = INT_MIN;

        for( auto it : mp ){
            if( it.second > mx ){
                mx = it.second;
                maxFreqCount = 1;
            }else if( it.second == mx ){
                maxFreqCount++;
            }
        }

        int length = ( mx - 1 ) * ( n + 1) + maxFreqCount;

        return length > size ?  length :  size;
    }
};
