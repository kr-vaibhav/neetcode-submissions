class Solution {

    bool anagram(string&st1, string&st2){
        int l1 = st1.length(),l2 = st2.length();
        if(l1!=l2)return false;
        map<char,int>u1;
        map<char,int>u2;
        for(char ch  : st1)u1[ch]++;
        for(char ch : st2)u2[ch]++;
        if(u1.size() != u2.size())return false;
        if(u1==u2)return true;
        return false;
    }

public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<bool>flag(n,true);
        vector<vector<string>>ans;
        for(int i = 0; i < n ; ++i ){
            if(flag[i]==true){
                    vector<string>ans1;
                    flag[i]=false;
                    string st = strs[i];
                    ans1.push_back(st);
                    bool flag1 = false;
                    for(int j = i + 1; j < n ; ++j ){
                        if(flag[j]==false)continue;
                        else if(anagram(st,strs[j])){
                            flag[j]=false;
                            ans1.push_back(strs[j]);
                        }
                    }
                    ans.push_back(ans1); 
            }else{
                continue;
            }
        }

        return ans;
    }
};
