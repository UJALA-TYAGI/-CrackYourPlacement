class Solution {
public:
    
    string commonPrefix(string s1, string s2){
        char length = min(s1.length(),s2.length());
        string common = "";
        for(char i=0; i<length; i++){
            if(s1[i] == s2[i])
                common += s1[i];
            else
                break;
        }
        return common;
    }
    
    string longestCommonPrefix(vector<string>& strs) {

//      without sorting
        string common = strs[0];
        for(char i=1; i<strs.size(); i++){
            common = commonPrefix(common, strs[i]);
        }
        return common;
    }
        
        
//      with sorting
//         string common = "";
//          sort(strs.begin(), strs.end());
//          char n = strs.size();
//          for(char i = 0; i<min(strs[0].length(),strs[n-1].length()); i++){
//              if(strs[0][i] == strs[n-1][i])
//                  common += strs[0][i];
//              else
//                  break;
//         }
//         return common;
        
//     }
};
