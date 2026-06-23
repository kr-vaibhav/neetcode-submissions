class Solution {
public:
    int characterReplacement(string s, int k) {
        int ans = 0, n = s.length();
        for( int i = 0; i < n ; ++i ){
            vector<int>arr(26,0);
            int maxAccur = 0, replacement = 0, count = k;
            for(int j = i; j < n; ++j ){
                arr[s[j]-'A']++;
                maxAccur = max( maxAccur, arr[s[j]-'A']);
                replacement = ( j - i + 1 ) - maxAccur;
                if( replacement <= k){
                    ans = max( ans, j - i + 1 );
                    count--;
                }else break;
            }

        }

        return ans;
    }
};
