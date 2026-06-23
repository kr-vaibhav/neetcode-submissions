    class Solution {
    public:
        int evalRPN(vector<string>& tokens) {
            stack<int>nums;
            int ans = 0;
            for( int i = 0; i < tokens.size(); ++i ){
                string st = tokens[i];
                if(st == "+" || st == "-" || st == "*" || st == "/"){
                    int b = nums.top();
                    nums.pop();
                    int a = nums.top();
                    nums.pop();

                    if( st == "+")ans= a + b;
                    else if( st == "-")ans= a - b;
                    else if ( st == "*")ans= a * b;
                    else{
                        ans = a / b;
                    }
                    nums.push(ans);
                }else{
                    nums.push(stoi(st));
                }
            }

            return nums.top();
        }
    };
