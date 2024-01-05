class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto it:tokens){
              if(it=="+"){
                int a=st.top();
                if(!st.empty()) st.pop();
                int b=st.top();
                if(!st.empty()) st.pop();
                st.push(b+a);
            }
             else if(it=="-"){
                int a=st.top();
                if(!st.empty()) st.pop();
                int b=st.top();
                if(!st.empty()) st.pop();
                st.push(b-a);
            }
             else if(it=="*"){
                int a=st.top();
                if(!st.empty()) st.pop();
                int b=st.top();
                if(!st.empty()) st.pop();
                st.push(b*a);
            }
             else if(it=="/"){
                int a=st.top();
                if(!st.empty()) st.pop();
                int b=st.top();
                if(!st.empty()) st.pop();
                st.push(b/a);
            }
            else{
                int str=stoi(it);
                st.push(str);
            }
        }
        return st.top();
    }
};
