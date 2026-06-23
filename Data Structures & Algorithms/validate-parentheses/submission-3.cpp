class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        
        for( int i = 0; i < s.length(); ++i ){
            char ch = s[i];
            if( ch == '(' || ch == '{' || ch == '[')st.push(s[i]);
            else{
                if(st.size() != 0){
                    char ch1 = st.top();
                    st.pop();

                    if( ch == ')' && ch1 == '(')continue;
                    else if( ch == '}' && ch1 == '{' )continue;
                    else if( ch == ']' && ch1 == '[')continue;
                    else return false;
                }else{
                    return false;
                }
            }
        }

        return st.size() == 0 ?  true :  false;
    }
};
