class Solution {
public:
    string convertToTitle(int columnNumber) {
//         string res = "";
//         while(columnNumber) {
//             columnNumber--;
//             res.push_back(columnNumber%26 + 'A');
//             columnNumber/=26;
//         }
//         reverse(res.begin(), res.end());
//         return res;
        
        string ans="";
        int rem;
        while(columnNumber){
            rem = columnNumber%26;
            if(rem==0){
                rem = 26;
            }
            char c = 64+rem;
            ans =  c+ans;
            columnNumber = (columnNumber-rem )/26;
        }
        return ans;
    }
};
