class Solution {
    bool isAlphaNumeric(char ch){
        return (ch>='a' && ch<='z') || 
                (ch>='A' && ch<='Z') || 
                (ch>='0' && ch<='9');
    }
public:
    bool isPalindrome(string s) {
        int i =0, j = s.length()-1;
        while(i<j){
            while( i < j && !isAlphaNumeric(s[i]))i++;
            while( j > i && !isAlphaNumeric(s[j]))j--;
            if(tolower(s[i]) != tolower(s[j]))return false;
            i++,j--;
        }
        return true;
    }
};
