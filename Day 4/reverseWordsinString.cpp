class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        for(int i=0; i<s.size(); i++){
            string l ="";
             while(s[i] != ' '&& i<s.size()) {
                l += s[i];
                i++;
            }

            if(l == "") continue;
            st.push(l);
        }
        string ans = "";
        while((!st.empty())) {
            ans += st.top();
            st.pop();
            ans += " ";
        }
        ans.pop_back();
        return ans;

    }   
        
    
//  Method 2
    /*
    concept: ALGORITHM
    1.traverse from end of string
    2.ignore white space char
    3.store each "word" while traversing the string from end
    4.Add "whitespace" and "reverse" the "word" and add it our "ans" string
    5.Don't add ' ', if it is the first word
    */
//     string reverseWords(string s) {
//         int n=s.length();
        
//         string ans="";
        
//         for(int i=n-1;i>=0;i--){
            
//             if(s[i]==' ') continue;
            
//             else{
//                 string word="";
                
//                 while(i>=0 && s[i] != ' '){
//                     word += s[i];
//                     i--;
//                 }
               
//                 reverse(word.begin(),word.end());
                
//                 if(ans.length()==0){
//                     ans.append(word);
//                 }
                
//                 else{
//                     ans += " "; //add space bw two words
//                     ans.append(word);
//                 }
                
//             }
//         }
        
//         return ans;
//    }
};
