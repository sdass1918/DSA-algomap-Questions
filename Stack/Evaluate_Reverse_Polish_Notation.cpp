class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(auto x:tokens)
        {
            if(isdigit(x[0]) || (x.length()>=2 && x[0]=='-'))
            {
                st.push(stoi(x));
            }else
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                if(x=="+")
                {
                    st.push(b+a);
                }else if(x=="*")
                {
                    st.push(a*b);
                }else if(x=="/")
                {
                    st.push(b/a);
                }else
                {
                    st.push(b-a);
                }
            }
        }
        return st.top();
    }
};