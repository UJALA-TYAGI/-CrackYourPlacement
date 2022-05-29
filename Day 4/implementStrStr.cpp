class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if(haystack.size()==0 &&  needle.size()==0) return 0;
        if(needle.size()==0) return 0;
        
        string res;
        int start = 0;
        for(int i = 0; i<haystack.size(); i++){
            res.push_back(haystack[i]);
            
            if(i>=needle.size()-1){
                if(res.compare(needle)==0){
                    return start;
                }
                res.erase(res.begin());
                start++;
            }
        }
        
        return -1;
    }
};
