class MinStack {
    stack<int>st, mn;

public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            mn.push(val);
            st.push(val);
        }else{
            if(mn.top() >= val ){
            mn.push(val);
            st.push(val);
            }else{
                st.push(val);
            }
        }
        
    }
    
    void pop() {
        int n;
        if(!st.empty()){
             n = st.top();
            st.pop();
        }
        if( n == mn.top() )mn.pop();
    }
    
    int top() {
        if(!st.empty())return st.top();
        else return -1;
    }
    
    int getMin() {
        if(!mn.empty())return mn.top();
        else return -1;
    }
};
