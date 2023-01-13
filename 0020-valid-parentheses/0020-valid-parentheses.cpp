class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto i=s.begin();i!=s.end();i++)
        {
            if(*i == '{' || *i=='(' || *i=='[')
            {
                st.push(*i);
            }
            else if(st.empty() || st.top() == '(' && *i != ')' || st.top() == '{' && *i != '}' || st.top() == '[' && *i != ']')
            {
                return false;
            }
            else{
                st.pop();
            }
        }
        return st.empty() ? true : false;
    }
};