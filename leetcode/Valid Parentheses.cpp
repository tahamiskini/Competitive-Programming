class Solution {
public:

     char rev(char c) {
        if (c == '(') return ')';
        if (c == '[') return ']';
        if (c == '{') return '}';
        return '\0';
    }

    bool isValid(string s) {
        stack<char>st;
        bool isValid = true;
        for(int i=0;i<s.size();i++){
            if((s[i]=='(') or (s[i] == '[') or (s[i]=='{')){
                st.push(s[i]);
            }
            else {
               if (st.empty() or rev(st.top()) != s[i]) {
                    return false;
                }
                st.pop();

            }
        }
        return st.empty();
       
    }
};