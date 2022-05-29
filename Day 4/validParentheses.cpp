class Solution {
public:
    bool isValid(string s) {
        if(s.length()==1) return false;
        stack<char> st;
        map<char, char> m;
        m.insert({'(' , ')'});
        m.insert({'[' , ']'});
        m.insert({'{' , '}'});
        for(char c : s){
            if(c == '(' || c == '[' || c == '{' || st.empty()){
                st.push(c);
            }
            
            else if(c==')' || c == ']' || c == '}' && !st.empty()){
                char ch = st.top();
                st.pop();
                if (m[ch]!= c) return false;
                
            }
        }
        
        if(st.empty()) return true;
        return false;
    }
};
