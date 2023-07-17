class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(auto it:s){
            if(it=='{' || it=='[' || it=='('){
                st.push(it);
            }
            else{
                if(st.size()==0){
                    return false;
                }
                int c=st.top();
                if(it==')' && c=='(' || it=='}' && c=='{'  || it==']' && c=='['){
                        st.pop();
                }
                else{
                    return false;
                } 
            }
        }
        if(st.size()!=0){
            return false;
        }
        return true;
    }
};