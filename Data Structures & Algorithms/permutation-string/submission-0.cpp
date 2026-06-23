class Solution {

    bool find(int start, int end, unordered_map<char,int>&mp, string st){
        unordered_map<char,int>mp1;
        for(int i = start; i <= end; ++i ){
            mp1[st[i]]++;
        }

        return mp == mp1 ? true : false;
    }

public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int>arr1;
        for( char ch : s1 )arr1[ch]++;
        int i = 0, n = s1.length(), n1 = s2.length(), j = n - 1;
        if( n > n1 )return false;

        bool ans = false;

        while( j < n1 ){
            if( find(i,j,arr1,s2) )return true;
            else{
                i++;
                j++;
            }
        }

        return false;
    }
};
